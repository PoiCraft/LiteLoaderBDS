#pragma once

#include <filesystem>
#include <utility>

#include "ll/api/event/Event.h"
#include "ll/api/event/Listener.h"

namespace ll::event {
inline namespace fs {
enum class FileActionType {
    Added = 1,
    Removed,
    Modified,
    RenamedOld,
    RenamedNew,
};

class FileActionEvent : public Event {
    std::filesystem::path const& mPath;
    FileActionType const&        mType;

public:
    constexpr FileActionEvent(std::filesystem::path const& p, FileActionType const& e) : mPath(p), mType(e) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI std::filesystem::path const& path() const;
    LLNDAPI FileActionType const&        type() const;
};
} // namespace fs

template <>
class Listener<fs::FileActionEvent> : public ListenerBase {
    friend fs::FileActionEvent;

public:
    std::string path;

    using event_type  = fs::FileActionEvent;
    using callback_fn = std::function<void(event_type&)>;

    explicit Listener(
        std::string const&                   path,
        callback_fn                          fn,
        EventPriority                        priority = EventPriority::Normal,
        std::weak_ptr<plugin::Plugin> const& plugin   = plugin::NativePlugin::current()
    )
    : ListenerBase(priority, plugin),
      path(path),
      callback(std::move(fn)) {
        nativeId.assign(event::getEventId<event_type>.name);
        nativeId += "|";
        nativeId += path;
    }

    [[nodiscard]] EventId getEventId() const { return EventId{nativeId}; }

    ~Listener() override = default;

    void call(Event& event) override { callback(static_cast<event_type&>(event)); }

    [[nodiscard]] EventId factoryId(EventId) const override { return event::getEventId<event_type>; }

    static std::shared_ptr<Listener>
    create(std::string const& path, callback_fn const& fn, EventPriority priority = EventPriority::Normal) {
        return std::make_shared<Listener>(path, fn, priority);
    }

private:
    callback_fn callback;
    std::string nativeId;
};
} // namespace ll::event
