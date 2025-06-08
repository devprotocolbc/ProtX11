//
// Created by BasLocal on 08/06/2025.
//

#include "DX3D/Core/Logger.h"

#include <iostream>


ProtX11::Logger::Logger(LogLevel logLevel) : m_logLevel(logLevel) {
    std::clog << "██████╗                      █╗   ██╗  ██╗     ██╗ ██╗" << std::endl;
    std::clog << "██╔══██╗  ████╗  ██████╗    ██║   ╚██╗██╔╝    ███║███║" << std::endl;
    std::clog << "██████╔╝██╔═══╝ ██╔═══██╗  █████╗  ╚███╔╝     ╚██║╚██║" << std::endl;
    std::clog << "██╔═══╝ ██║     ██║   ██║  ╚██╔═╝  ██╔██╗      ██║ ██║" << std::endl;
    std::clog << "██║     ██║     ╚██████╔╝   ██║   ██╔╝ ██╗     ██║ ██║" << std::endl;
    std::clog << "╚═╝     ╚═╝      ╚═════╝    ╚═╝   ╚═╝  ╚═╝     ╚═╝ ╚═╝\n" << std::endl;
    std::clog << "--------------Dev://BC | ProtX DirectX11--------------\n\n" << std::endl;
}

void ProtX11::Logger::log(LogLevel level, const char *message) const {
    auto logLeveltoString = [](LogLevel level) {
        switch (level) {
            case LogLevel::Info: return "Info";
            case LogLevel::Warning: return "Warning";
            case LogLevel::Error: return "Error";
            default: return "unknown";
        }
    };

    if (level > m_logLevel) return;
    std::clog << "[ProtX11 " << logLeveltoString(m_logLevel) << "]: " << message << std::endl;
}
