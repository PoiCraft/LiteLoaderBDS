#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Settings {

enum class ThemeSettingsColorKey : int {
    TitleBarBackground       = 0,
    PanelBackground          = 1,
    HeaderBackground         = 2,
    PanelBorder              = 3,
    ElementBorder            = 4,
    PrimaryActive            = 5,
    PrimaryDefault           = 6,
    PrimaryMute              = 7,
    PrimaryDisable           = 8,
    PrimaryBackground1       = 9,
    PrimaryBackground2       = 10,
    PrimaryBackground3       = 11,
    PrimaryBackground4       = 12,
    SecondaryActive          = 13,
    SecondaryDefault         = 14,
    SecondaryMute            = 15,
    SecondaryDisable         = 16,
    SecondaryBackground1     = 17,
    SecondaryBackground2     = 18,
    SecondaryBackground3     = 19,
    DropDown1                = 20,
    DropDown2                = 21,
    DropDown3                = 22,
    ScrollBar                = 23,
    FocusOutline             = 24,
    Warning                  = 25,
    Error                    = 26,
    HotbarOutline            = 27,
    ViewportOutline          = 28,
    DisableBackground        = 29,
    DisableOutline           = 30,
    DisableText              = 31,
    DisableFill              = 32,
    Coordinate1              = 33,
    Coordinate2              = 34,
    Coordinate3              = 35,
    ConfirmFill              = 36,
    Confirm1                 = 37,
    Confirm2                 = 38,
    Confirm3                 = 39,
    DestroyFill              = 40,
    Destroy1                 = 41,
    Destroy2                 = 42,
    Destroy3                 = 43,
    InfoFill                 = 44,
    Info1                    = 45,
    Info2                    = 46,
    Info3                    = 47,
    Caret                    = 48,
    CursorVolumeBorder       = 49,
    CursorVolumeFill         = 50,
    SelectionVolumeBorder    = 51,
    SelectionVolumeFill      = 52,
    PrefillVolumeBorder      = 53,
    PrefillVolumeFill        = 54,
    PlacementVolumeBorder    = 55,
    PlacementVolumeFill      = 56,
    ControlsGeneralFill      = 57,
    ControlsGeneralHighlight = 58,
    CoordinateControlX       = 59,
    CoordinateControlY       = 60,
    CoordinateControlZ       = 61,
};

}