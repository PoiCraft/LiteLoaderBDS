#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace Core { class FlatFileManifestInfo; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class FlatFileManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkac2d9c;
    ::ll::UntypedStorage<8, 24> mUnkae11c7;
    ::ll::UntypedStorage<8, 8>  mUnk77e960;
    ::ll::UntypedStorage<8, 8>  mUnk2f7b1d;
    ::ll::UntypedStorage<8, 32> mUnk5f9a29;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileManifest& operator=(FlatFileManifest const&);
    FlatFileManifest(FlatFileManifest const&);
    FlatFileManifest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addMissingDirectoriesForEntry(::Core::Path const& fileOrDirectoryPath);

    MCAPI void _clear();

    MCAPI void _createFromVector(
        ::Core::Path const&                                manifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector,
        uint64                                             version,
        bool                                               validatePaths
    );

    MCAPI ::Bedrock::Result<void> _readHeaderFromStream(::ReadOnlyBinaryStream& manifestFileStream);

    MCAPI ::Core::FlatFileManifestInfo const*
    findFileOrDirectoryEntry(::Core::Path const& filePath, bool skipDeleted) const;

    MCAPI ::Bedrock::Result<void>
    readFromStream(::std::string const& manifestFileStr, ::Core::Path const& manifestPath, bool validatePaths);
    // NOLINTEND
};

} // namespace Core
