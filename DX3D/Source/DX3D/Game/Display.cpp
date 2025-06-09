//
// Created by BasLocal on 09/06/2025.
//

#include "DX3D/Game/Display.h"

#include "DX3D/Graphics/RenderSystem.h"

namespace ProtX11 {
    Display::Display(const DisplayDesc &desc): Window(desc.window) {
        m_SwapChain = desc.renderSystem.createSwapChain({m_handle, m_size});
    }
} // ProtX11
