//
// Created by BasLocal on 08/06/2025.
//

#include "../../../Include/DX3D/Game/ProtX.h"
#include "../../../Include/DX3D/Window/Window.h"

namespace ProtX11 {
    ProtX::ProtX() {

        m_display = std::make_unique<Window>();
    }

    ProtX::~ProtX() {
    }
} // ProtX11