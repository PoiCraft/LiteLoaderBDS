#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/deps/core/threading/BackgroundTaskBase.h"
#include "mc/deps/core/threading/ITaskExecutionContext.h"
#include "mc/deps/core/threading/SPSCQueue.h"

// auto generated forward declare list
// clang-format off
class BackgroundTaskBase;
class WorkerPool;
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

class BackgroundWorker : public ::ITaskExecutionContext {
public:
    // BackgroundWorker inner types define
    enum class RunOneResult : int {
        NoTasks      = 0,
        TaskExecuted = 1,
        Retry        = 2,
    };

    enum class State : int {
        Initializing = 0,
        Off          = 1,
        Running      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk588fa6;
    ::ll::UntypedStorage<4, 4>   mUnk710ade;
    ::ll::UntypedStorage<8, 16>  mUnk13d7dc;
    ::ll::UntypedStorage<4, 8>   mUnka1b2fe;
    ::ll::UntypedStorage<8, 32>  mUnk3ba000;
    ::ll::UntypedStorage<8, 16>  mUnkd929e4;
    ::ll::UntypedStorage<4, 4>   mUnka494ab;
    ::ll::UntypedStorage<4, 4>   mUnke7131f;
    ::ll::UntypedStorage<8, 160> mUnk340fb7;
    ::ll::UntypedStorage<1, 1>   mUnkd41591;
    ::ll::UntypedStorage<8, 8>   mUnkb6dab1;
    ::ll::UntypedStorage<8, 16>  mUnk923ee5;
    ::ll::UntypedStorage<8, 8>   mUnkf38404;
    ::ll::UntypedStorage<8, 8>   mUnkaffb93;
    ::ll::UntypedStorage<8, 360> mUnk649664;
    // NOLINTEND

public:
    // prevent constructor by default
    BackgroundWorker& operator=(BackgroundWorker const&);
    BackgroundWorker(BackgroundWorker const&);
    BackgroundWorker();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BackgroundWorker() /*override*/;

    // vIndex: 1
    virtual bool isAsync() const /*override*/;

    // vIndex: 2
    virtual bool canTaskRunAgain() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BackgroundWorker(
        ::std::string                                 name,
        bool                                          async,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64>                       coreAffinity,
        ::std::optional<int>                          idealCore,
        ::WorkerPool&                                 workerPool,
        bool                                          suppressProfiling
    );

    MCAPI void _doNoWorkDelay();

    MCAPI bool _processNextTask();

    MCAPI ::BackgroundWorker::RunOneResult _runOneTask();

    MCAPI uint64 getApproximateTaskCount() const;

    MCAPI ::std::thread::id getThreadId() const;

    MCAPI bool isIdle() const;

    MCAPI bool processTaskSync();

    MCAPI void queue(::std::shared_ptr<::BackgroundTaskBase> task);

    MCAPI void requestStop(bool wait);

    MCAPI void resetWorkerThreadID();

    MCAPI void resortPriorityQueue();

    MCAPI void start();

    MCAPI void wake();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BackgroundWorker* getLocal();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BackgroundWorker*& gLocalWorkerMappingSingleton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                 name,
        bool                                          async,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64>                       coreAffinity,
        ::std::optional<int>                          idealCore,
        ::WorkerPool&                                 workerPool,
        bool                                          suppressProfiling
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isAsync() const;

    MCAPI bool $canTaskRunAgain() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
