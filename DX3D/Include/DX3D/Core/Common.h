//
// Created by BasLocal on 08/06/2025.
//

#ifndef COMMON_H
#define COMMON_H
#include "DX3D/Core/Core.h"
#include "DX3D/Core/Logger.h"

namespace ProtX11 {
    struct BaseDesc {
        Logger &logger;
    };

    struct WindowDesc {
        BaseDesc base;
    };

    struct GraphicsEngineDesc {
        BaseDesc base;
    };

    struct RenderSystemDesc {
        BaseDesc base;
    };

    struct ProtXDesc {
        Logger::LogLevel logLevel = Logger::LogLevel::Error;
    };
}
#endif //COMMON_H
