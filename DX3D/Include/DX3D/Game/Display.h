//
// Created by BasLocal on 09/06/2025.
//

#ifndef DISPLAY_H
#define DISPLAY_H
#include "DX3D/Window/Window.h"

namespace ProtX11 {
    class Display final : public Window {
    public:
        explicit Display(const DisplayDesc &desc);

    private:
        SwapChainPtr m_SwapChain;
    };
} // ProtX11

#endif //DISPLAY_H
