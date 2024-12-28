#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

namespace ScriptModuleMinecraft {

class ScriptVector : public ::Vec3 {
public:
    // prevent constructor by default
    ScriptVector& operator=(ScriptVector const&);
    ScriptVector(ScriptVector const&);
    ScriptVector();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptVector const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptVector> bind();

    MCAPI static ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    divide(::Vec3 const& a, ::std::variant<float, ::Vec3> const& b);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
