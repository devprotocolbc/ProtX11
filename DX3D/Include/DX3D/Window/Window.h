//
// Created by BasLocal on 08/06/2025.
//

#ifndef WINDOW_H
#define WINDOW_H
#include "DX3D/Core/Base.h"

namespace ProtX11 {

class Window : public Base{
    public:
    Window();
    virtual ~Window() override;

    private:
        void* m_handle{};

};

} // ProtX11

#endif