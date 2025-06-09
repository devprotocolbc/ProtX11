//
// Created by BasLocal on 08/06/2025.
//

#ifndef WINDOW_H
#define WINDOW_H
#include "DX3D/Core/Base.h"
#include "DX3D/Core/Common.h"

namespace ProtX11 {
    class Window : public Base {
    public:
        explicit Window(const WindowDesc &desc);

        virtual ~Window() override;

    protected:
        void *m_handle{};
        Rect m_size{};
    };
} // ProtX11

#endif
