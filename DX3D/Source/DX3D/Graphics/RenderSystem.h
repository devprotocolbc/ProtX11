//
// Created by BasLocal on 08/06/2025.
//

#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H
#include "DX3D/Core/Base.h"
#include "DX3D/Core/Common.h"
#include <d3d11.h>
#include <wrl.h>

#include "GraphicsResource.h"


namespace ProtX11 {
    class RenderSystem final : public Base, public std::enable_shared_from_this<RenderSystem> {
    public:
        explicit RenderSystem(const RenderSystemDesc &desc);

        virtual ~RenderSystem() override;

        SwapChainPtr createSwapChain(const SwapChainDesc &desc) const;

    private:
        GraphicsResourceDesc getGraphicResourceDesc() const noexcept;

    private:
        Microsoft::WRL::ComPtr<ID3D11Device> m_d3dDevice{};
        Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_d3dDContext{};
        Microsoft::WRL::ComPtr<IDXGIDevice> m_dxgiDevice{};
        Microsoft::WRL::ComPtr<IDXGIAdapter> m_dxgiAdapter{};
        Microsoft::WRL::ComPtr<IDXGIFactory> m_dxgiFactory{};
    };
} // ProtX11

#endif //RENDERSYSTEM_H
