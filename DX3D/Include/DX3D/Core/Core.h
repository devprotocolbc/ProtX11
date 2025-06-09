//
// Created by BasLocal on 08/06/2025.
//

#ifndef CORE_H
#define CORE_H
#include <memory>      // used in ProtX.h

namespace ProtX11 {
    class Base;
    class Window;
    class ProtX;

    class GraphicsEngine;
    class RenderSystem;

    class Logger;
    class SwapChain;
    class Display;

    using i32 = int;
    using ui32 = unsigned int;
    using f32 = float;
    using d64 = double;

    using SwapChainPtr = std::shared_ptr<SwapChain>;
}

#endif //CORE_H
