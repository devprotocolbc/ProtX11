//
// Created by BasLocal on 09/06/2025.
//

#ifndef GRAPHICSRESOURCE_H
#define GRAPHICSRESOURCE_H
#include <d3d11.h>
#include <wrl.h>

#include "DX3D/Core/Base.h"
#include "DX3D/Graphics/GraphicsLogUtils.h"

namespace ProtX11 {
    struct GraphicsResourceDesc {
        BaseDesc base;
        std::shared_ptr<const RenderSystem> renderSystem;
        ID3D11Device &device;
        IDXGIFactory &factory;
    };

    class GraphicsResource : public Base {
    public:
        explicit GraphicsResource(const GraphicsResourceDesc &desc): Base(desc.base),
                                                                     m_renderSystem(desc.renderSystem),
                                                                     m_device(desc.device),
                                                                     m_factory(desc.factory) {
        }

    protected:
        std::shared_ptr<const RenderSystem> m_renderSystem;
        ID3D11Device &m_device;
        IDXGIFactory &m_factory;
    };
}
#endif //GRAPHICSRESOURCE_H
