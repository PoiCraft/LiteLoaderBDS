#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttribute.h"
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace cricket {

class StunByteStringAttribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6ed073;
    // NOLINTEND

public:
    // prevent constructor by default
    StunByteStringAttribute& operator=(StunByteStringAttribute const&);
    StunByteStringAttribute(StunByteStringAttribute const&);
    StunByteStringAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StunByteStringAttribute() /*override*/;

    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader*) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CopyBytes(::std::string_view);

    MCAPI void CopyBytes(void const*, uint64);

    MCAPI void SetBytes(uchar*, uint64);

    MCAPI explicit StunByteStringAttribute(ushort);

    MCAPI StunByteStringAttribute(ushort, ::std::string_view);

    MCAPI StunByteStringAttribute(ushort, ushort);

    MCAPI StunByteStringAttribute(ushort, void const*, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort);

    MCAPI void* $ctor(ushort, ::std::string_view);

    MCAPI void* $ctor(ushort, ushort);

    MCAPI void* $ctor(ushort, void const*, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cricket::StunAttributeValueType $value_type() const;

    MCAPI bool $Read(::rtc::ByteBufferReader*);

    MCAPI bool $Write(::rtc::ByteBufferWriter*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
