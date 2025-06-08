//
// Created by BasLocal on 08/06/2025.
//

#include "DX3D/Graphics/GraphicsEngine.h"
#include "DX3D/Graphics/RenderSystem.h"

namespace ProtX11 {
    GraphicsEngine::GraphicsEngine(const GraphicsEngineDesc &desc): Base(desc.base) {
        m_renderSystem = std::make_unique<RenderSystem>(RenderSystemDesc{m_logger});
    }

    GraphicsEngine::~GraphicsEngine() {
    }
} // ProtX11
