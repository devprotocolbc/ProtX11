//
// Created by BasLocal on 08/06/2025.
//

#ifndef GRAPHICSENGINE_H
#define GRAPHICSENGINE_H
#include <memory>

#include "DX3D/Core/Base.h"
#include <DX3D/Core/Core.h>

namespace ProtX11 {
    class GraphicsEngine final : public Base {
    public:
        explicit GraphicsEngine(const GraphicsEngineDesc &desc);

        virtual ~GraphicsEngine() override;

    private:
        std::unique_ptr<RenderSystem> m_renderSystem;
    };
} // ProtX11

#endif //GRAPHICSENGINE_H
