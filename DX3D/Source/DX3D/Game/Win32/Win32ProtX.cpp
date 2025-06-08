//
// Created by BasLocal on 08/06/2025.
//
#include <windows.h>

#include "DX3D/Game/ProtX.h"

namespace ProtX11 {
    void ProtX::run(){

        MSG msg{};
        while (m_isRunning) {
            while ( PeekMessage(&msg, 0, 0, 0, PM_REMOVE) ){
                if (msg.message == WM_QUIT) {
                    m_isRunning = false;
                    break;
                }
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
            Sleep(1);
        }
    }
}
