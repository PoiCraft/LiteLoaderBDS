#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Memory {

enum class MemoryCategory : int {
    Unknown                          = 0,
    Actor                            = 1,
    Balancer                         = 2,
    BlockTickingQueues               = 3,
    BiomeStorage                     = 4,
    Client                           = 5,
    DBStorage                        = 6,
    Debug                            = 7,
    Documentation                    = 8,
    Fmod                             = 9,
    ImGui                            = 10,
    JsonUi                           = 11,
    LevelStructures                  = 12,
    LevelChunk                       = 13,
    LevelChunkGen                    = 14,
    LevelChunkGenThreadLocal         = 15,
    Network                          = 16,
    MaterialDragonCompiledDefinition = 17,
    MaterialDragonMaterial           = 18,
    MaterialDragonResource           = 19,
    MaterialDragonUniformMap         = 20,
    MaterialRenderMaterial           = 21,
    MaterialRenderMaterialGroup      = 22,
    MaterialVariationManager         = 23,
    Molang                           = 24,
    OreUI                            = 25,
    RenderChunk                      = 26,
    RenderChunkIndexBuffer           = 27,
    RenderChunkVertexBuffer          = 28,
    Rendering                        = 29,
    ResourcePacks                    = 30,
    Sound                            = 31,
    SubChunkBiomeData                = 32,
    SubChunkBlockData                = 33,
    SubChunkLightData                = 34,
    Textures                         = 35,
    Vr                               = 36,
    WeatherRenderer                  = 37,
    WorldGenerator                   = 38,
    Tasks                            = 39,
    Scripting                        = 40,
    ScriptingRuntime                 = 41,
    ScriptingContext                 = 42,
    ScriptingContextBindingsMc       = 43,
    ScriptingContextBindingsGt       = 44,
    ScriptingContextRun              = 45,
    MemoryCategoryCount              = 46,
};

}