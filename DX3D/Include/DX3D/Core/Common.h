//
// Created by BasLocal on 08/06/2025.
//

#ifndef COMMON_H
#define COMMON_H
#include "DX3D/Core/Logger.h"
#include "DX3D/Math/Rect.h"

namespace ProtX11 {
    struct BaseDesc {
        Logger &logger;
    };

    struct WindowDesc {
        BaseDesc base;
        Rect size{};
    };

    struct DisplayDesc {
        WindowDesc window;
        RenderSystem &renderSystem;
    };

    struct GraphicsEngineDesc {
        BaseDesc base;
    };

    struct RenderSystemDesc {
        BaseDesc base;
    };

    struct SwapChainDesc {
        void *winHandle{};
        Rect winSize{};
    };


    struct ProtXDesc {
        Rect windowSize{1280, 720};
        Logger::LogLevel logLevel = Logger::LogLevel::Error;
    };
}
#endif //COMMON_H
