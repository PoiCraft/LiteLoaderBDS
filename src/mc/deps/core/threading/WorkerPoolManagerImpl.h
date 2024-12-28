#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/WorkerPoolManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

namespace Bedrock {

class WorkerPoolManagerImpl : public ::Bedrock::WorkerPoolManager {
public:
    // WorkerPoolManagerImpl inner types declare
    // clang-format off
    struct PoolEntry;
    // clang-format on

    // WorkerPoolManagerImpl inner types define
    struct PoolEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkc189dd;
        ::ll::UntypedStorage<8, 16> mUnke865a9;
        // NOLINTEND

    public:
        // prevent constructor by default
        PoolEntry& operator=(PoolEntry const&);
        PoolEntry(PoolEntry const&);
        PoolEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PoolEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk53d969;
    ::ll::UntypedStorage<8, 80> mUnkf15882;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolManagerImpl& operator=(WorkerPoolManagerImpl const&);
    WorkerPoolManagerImpl(WorkerPoolManagerImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void init() /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> createWorkerPool(
        ::std::string                                 name,
        uint64                                        threadCount,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64> const                 coreAffinityMask,
        bool                                          suppressWorkerProfiling,
        ::std::optional<int> const                    idealCore
    ) /*override*/;

    // vIndex: 3
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~WorkerPoolManagerImpl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorkerPoolManagerImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();

    MCAPI ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> $createWorkerPool(
        ::std::string                                 name,
        uint64                                        threadCount,
        ::Bedrock::Threading::OSThreadPriority const& priority,
        ::std::optional<uint64> const                 coreAffinityMask,
        bool                                          suppressWorkerProfiling,
        ::std::optional<int> const                    idealCore
    );

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForImplBase();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Bedrock
