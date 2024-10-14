#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct PackIdVersion {
public:
    mce::UUID  mId;       // this+0x0
    SemVersion mVersion;  // this+0x10
    PackType   mPackType; // this+0x80

public:
    // NOLINTBEGIN
    MCAPI PackIdVersion();

    MCAPI PackIdVersion(class mce::UUID const& id, class SemVersion const& version, ::PackType packType);

    MCAPI std::string asString() const;

    MCAPI bool operator!=(struct PackIdVersion const& rhs) const;

    MCAPI bool operator<(struct PackIdVersion const& rhs) const;

    MCAPI bool operator==(struct PackIdVersion const& rhs) const;

    MCAPI bool satisfies(struct PackIdVersion const& rhs) const;

    MCAPI ~PackIdVersion();

    MCAPI static struct PackIdVersion fromString(std::string const& inputStr);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
