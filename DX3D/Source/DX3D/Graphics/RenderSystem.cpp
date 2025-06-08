//
// Created by BasLocal on 08/06/2025.
//

#include "DX3D/Graphics/RenderSystem.h"
#include <stdexcept>


namespace ProtX11 {
    RenderSystem::RenderSystem(const RenderSystemDesc &desc) : Base(desc.base) {
        D3D_FEATURE_LEVEL featureLevel{};
        UINT createDeviceFlags{};

#ifdef _DEBUG
        createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif
        auto hr = D3D11CreateDevice(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, nullptr, 0,
                                    D3D11_SDK_VERSION, &m_d3dDevice, &featureLevel, &m_d3dDContext);

        if (FAILED(hr)) {
            getLogger().log(Logger::LogLevel::Error, "Failed to create D3D11 device");
            throw std::runtime_error("Failed to create DirectX 11 device");
        }
    }

    RenderSystem::~RenderSystem() {
    }
} // ProtX11
