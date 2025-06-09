//
// Created by BasLocal on 08/06/2025.
//

#include "DX3D/Graphics/GraphicsEngine.h"
#include "DX3D/Graphics/RenderSystem.h"

namespace ProtX11 {
    GraphicsEngine::GraphicsEngine(const GraphicsEngineDesc &desc): Base(desc.base) {
        m_renderSystem = std::make_shared<RenderSystem>(RenderSystemDesc{m_logger});
    }

    GraphicsEngine::~GraphicsEngine() {
    }

    RenderSystem &GraphicsEngine::getRenderSystem() const noexcept {
        return *m_renderSystem;
    }
} // ProtX11
