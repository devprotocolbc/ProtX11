//
// Created by BasLocal on 09/06/2025.
//

#include "DX3D/Graphics/SwapChain.h"

namespace ProtX11 {
    SwapChain::SwapChain(const SwapChainDesc &desc, const GraphicsResourceDesc &gDesc): GraphicsResource(gDesc) {
        DXGI_SWAP_CHAIN_DESC dxgiDesc{};

        dxgiDesc.BufferDesc.Width = std::max(1, desc.winSize.width);
        dxgiDesc.BufferDesc.Height = std::max(1, desc.winSize.height);
        dxgiDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        dxgiDesc.BufferCount = 2;
        dxgiDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

        dxgiDesc.OutputWindow = static_cast<HWND>(desc.winHandle);
        dxgiDesc.SampleDesc.Count = 1;
        dxgiDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
        dxgiDesc.Windowed = TRUE;

        ProtXGraphicsLogErrorAndThrow(m_factory.CreateSwapChain(&m_device, &dxgiDesc, &m_swapChain),
                                      "CreateSwapChain Failed.");
    }
} // ProtX11
