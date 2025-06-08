//
// Created by BasLocal on 08/06/2025.
//

#ifndef PROTX_H
#define PROTX_H

#include "DX3D/Core/Core.h"
#include "DX3D/Core/Base.h"

namespace ProtX11 {
    class ProtX : public Base {
    public:
        explicit ProtX(const ProtXDesc &desc);

        virtual ~ProtX() override;

        virtual void run() final;

    private:
        std::unique_ptr<Logger> m_loggerPtr{};
        std::unique_ptr<GraphicsEngine> m_graphicsEngine{};
        std::unique_ptr<Window> m_display{};
        bool m_isRunning{true};
    };
} // ProtX11

#endif //PROTX_H
