//
// Created by BasLocal on 09/06/2025.
//

#ifndef SWAPCHAIN_H
#define SWAPCHAIN_H
#include "DX3D/Graphics/GraphicsResource.h"

namespace ProtX11 {
    class SwapChain final : public GraphicsResource {
    public:
        SwapChain(const SwapChainDesc &desc, const GraphicsResourceDesc &gDesc);

    private:
        Microsoft::WRL::ComPtr<IDXGISwapChain> m_swapChain{};
    };
} // ProtX11

#endif //SWAPCHAIN_H
