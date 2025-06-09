//
// Created by BasLocal on 08/06/2025.
//

#include "DX3D/Graphics/RenderSystem.h"
#include "DX3D/Graphics/GraphicsLogUtils.h"
#include "DX3D/Graphics/SwapChain.h"
#include <stdexcept>


namespace ProtX11 {
    RenderSystem::RenderSystem(const RenderSystemDesc &desc) : Base(desc.base) {
        D3D_FEATURE_LEVEL featureLevel{};
        UINT createDeviceFlags{};

#ifdef _DEBUG
        createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif
        ProtXGraphicsLogErrorAndThrow(
            D3D11CreateDevice(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, nullptr, 0,
                D3D11_SDK_VERSION, &m_d3dDevice, &featureLevel, &m_d3dDContext), "Failed to create D3D11 device");

        ProtXGraphicsLogErrorAndThrow(m_d3dDevice->QueryInterface(IID_PPV_ARGS(&m_dxgiDevice)),
                                      "QueryInterface Failed to retrieve DXGIDevice.");

        ProtXGraphicsLogErrorAndThrow(m_dxgiDevice->GetParent(IID_PPV_ARGS(&m_dxgiAdapter)),
                                      "GetParent Failed to retrieve DXGIAdapter.");

        ProtXGraphicsLogErrorAndThrow(m_dxgiAdapter->GetParent(IID_PPV_ARGS(&m_dxgiFactory)),
                                      "GetParent Failed to retrieve DXGIFactory.");
    }

    RenderSystem::~RenderSystem() {
    }

    SwapChainPtr RenderSystem::createSwapChain(const SwapChainDesc &desc) const {
        return std::make_shared<SwapChain>(desc, getGraphicResourceDesc());
    }

    GraphicsResourceDesc RenderSystem::getGraphicResourceDesc() const noexcept {
        return {{m_logger}, shared_from_this(), *m_d3dDevice.Get(), *m_dxgiFactory.Get()};
    }
} // ProtX11
