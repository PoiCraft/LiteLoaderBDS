#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaStreamTrackInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioProcessorInterface; }
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrackSinkInterface; }
// clang-format on

namespace webrtc {

class AudioTrackInterface : public ::webrtc::MediaStreamTrackInterface {
public:
    // prevent constructor by default
    AudioTrackInterface& operator=(AudioTrackInterface const&);
    AudioTrackInterface(AudioTrackInterface const&);
    AudioTrackInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ::webrtc::AudioSourceInterface* GetSource() const = 0;

    // vIndex: 9
    virtual void AddSink(::webrtc::AudioTrackSinkInterface*) = 0;

    // vIndex: 10
    virtual void RemoveSink(::webrtc::AudioTrackSinkInterface*) = 0;

    // vIndex: 11
    virtual bool GetSignalLevel(int*);

    // vIndex: 12
    virtual ::webrtc::scoped_refptr<::webrtc::AudioProcessorInterface> GetAudioProcessor();

    // vIndex: 2
    virtual ~AudioTrackInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $GetSignalLevel(int*);

    MCAPI ::webrtc::scoped_refptr<::webrtc::AudioProcessorInterface> $GetAudioProcessor();
    // NOLINTEND
};

} // namespace webrtc