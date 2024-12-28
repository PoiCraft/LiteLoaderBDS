#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {

struct ObjectFactory : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk68fdc7;
    ::ll::UntypedStorage<8, 16>  mUnkac19c1;
    ::ll::UntypedStorage<8, 144> mUnkf51b36;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ObjectFactory(::Scripting::ObjectFactory const&);

    MCAPI ObjectFactory(
        ::std::string                                         name_,
        ::std::shared_ptr<::Scripting::Reflection::IFunction> func_,
        ::entt::meta_type                                     type_
    );

    MCAPI ~ObjectFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::ObjectFactory const&);

    MCAPI void*
    $ctor(::std::string name_, ::std::shared_ptr<::Scripting::Reflection::IFunction> func_, ::entt::meta_type type_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
