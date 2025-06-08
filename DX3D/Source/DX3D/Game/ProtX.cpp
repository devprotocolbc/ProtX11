//
// Created by BasLocal on 08/06/2025.
//

#include "DX3D/Game/ProtX.h"

#include "DX3D/Core/Logger.h"
#include "DX3D/Graphics/GraphicsEngine.h"
#include "DX3D/Window/Window.h"


namespace ProtX11 {
    ProtX::ProtX(const ProtXDesc &desc): Base({*std::make_unique<Logger>(desc.logLevel).release()}),
                                         m_loggerPtr(&m_logger) {
        // m_loggerPtr = std::make_unique<Logger>(Logger::LogLevel::Info);
        m_graphicsEngine = std::make_unique<GraphicsEngine>(GraphicsEngineDesc{m_logger});
        m_display = std::make_unique<Window>(WindowDesc{m_logger});

        m_loggerPtr->log(Logger::LogLevel::Info, "Game initialized.");
    }

    ProtX::~ProtX() {
        m_loggerPtr->log(Logger::LogLevel::Warning, "Game deallocation started.");
    }
} // ProtX11
