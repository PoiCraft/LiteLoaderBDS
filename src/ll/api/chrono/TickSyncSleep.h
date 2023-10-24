#pragma once

#include "ll/api/chrono/GameChrono.h"
#include <chrono>
#include <mutex>

namespace ll::gamechrono {

extern std::vector<std::pair<void*, bool>> ticklist;

template <class Clock>
class TickSyncSleep {
    bool                    interrupted{false};
    std::mutex              mutex;
    std::condition_variable cv;
    size_t                  id;

public:
    TickSyncSleep(const TickSyncSleep&)                     = delete;
    TickSyncSleep(TickSyncSleep&&) noexcept                 = delete;
    TickSyncSleep& operator=(const TickSyncSleep&) noexcept = delete;
    TickSyncSleep& operator=(TickSyncSleep&&) noexcept      = delete;

    Clock::time_point timepoint;

    enum class State {
        None,
        Sleep,
        SleepFor,
        SleepUntil,
    } state{State::None};

    TickSyncSleep() {
        id = ticklist.size();
        ticklist.emplace_back(this, Clock::is_steady);
    }

    ~TickSyncSleep() {
        state = State::None;
        std::swap(ticklist[id], ticklist.back());
        ticklist.pop_back();
    }

    void sleepFor(Clock::duration duration) {
        std::unique_lock<std::mutex> lock{mutex};
        this->timepoint = Clock::now() + duration;
        state           = State::SleepFor;
        cv.wait(lock, [this] { return interrupted; });
        interrupted = false;
    }

    void sleepUntil(Clock::time_point time) {
        std::unique_lock<std::mutex> lock{mutex};
        this->timepoint = time;
        state           = State::SleepUntil;
        cv.wait(lock, [this] { return interrupted; });
        interrupted = false;
    }

    void sleep() {
        std::unique_lock<std::mutex> lock{mutex};
        state = State::Sleep;
        cv.wait(lock, [this] { return interrupted; });
        interrupted = false;
    }

    void interrupt() {
        std::lock_guard<std::mutex> lg(mutex);
        state       = State::None;
        interrupted = true;
        cv.notify_one();
    }
};
} // namespace ll::gamechrono