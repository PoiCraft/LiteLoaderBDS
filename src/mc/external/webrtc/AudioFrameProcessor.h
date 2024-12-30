#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioFrame; }
// clang-format on

namespace webrtc {

class AudioFrameProcessor {
public:
    // prevent constructor by default
    AudioFrameProcessor& operator=(AudioFrameProcessor const&);
    AudioFrameProcessor(AudioFrameProcessor const&);
    AudioFrameProcessor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AudioFrameProcessor();

    // vIndex: 1
    virtual void Process(::std::unique_ptr<::webrtc::AudioFrame>) = 0;

    // vIndex: 2
    virtual void SetSink(::std::function<void(::std::unique_ptr<::webrtc::AudioFrame>)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc