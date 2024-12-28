#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk940828;
    ::ll::UntypedStorage<8, 32> mUnk67074a;
    ::ll::UntypedStorage<8, 32> mUnkcb2417;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageReceived& operator=(MessageReceived const&);
    MessageReceived(MessageReceived const&);
    MessageReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MessageReceived();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
