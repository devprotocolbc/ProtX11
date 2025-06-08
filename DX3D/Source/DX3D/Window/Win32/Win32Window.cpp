//
// Created by BasLocal on 08/06/2025.
//

#include <functional>
#include <stdexcept>

#include "DX3D/Window/Window.h"?
#include "Windows.h"
#include "DX3D/Core/Core.h"

static LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_CLOSE: {
            PostQuitMessage(0);
            break;
        }
        default:
            return DefWindowProc(hWnd, msg, wParam, lParam);
    }
    return 0;
}

namespace ProtX11 {
    Window::Window() : Base(){

        auto registerWindowFunction = []() {
            WNDCLASSEX wc{};
            wc.cbSize = sizeof(WNDCLASSEX);
            wc.lpszClassName = "ProtX11WindowClass";
            wc.lpfnWndProc = &WindowProcedure;
            return RegisterClassEx(&wc);
        };

        static auto windowClassId = std::invoke(registerWindowFunction);

        if (!windowClassId)
            throw std::runtime_error("Failed to register window class (RegisterClassEx failed)");

        RECT rc{ 0, 0, 1280, 720};
        AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, false);

        m_handle = CreateWindowEx(NULL, MAKEINTATOM(windowClassId), "Dev://BC | ProtX DirectX11 Window",
            WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, CW_USEDEFAULT, CW_USEDEFAULT,
            rc.right - rc.left, rc.bottom - rc.top,
            NULL, NULL, NULL, NULL);

        if (!m_handle)
            throw std::runtime_error("Failed to create window handle (m_handle failed)");

        ShowWindow(static_cast<HWND>(m_handle), SW_SHOW);
    }

    Window::~Window() {
        DestroyWindow(static_cast<HWND>(m_handle));
    }
} // ProtX11