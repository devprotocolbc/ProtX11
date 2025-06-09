//
// Created by BasLocal on 08/06/2025.
//

#include "DX3D/Core/Logger.h"

#include <iostream>
#include <random>


ProtX11::Logger::Logger(LogLevel logLevel) : m_logLevel(logLevel) {
    srand(time(0));
    if (int rando = rand() % 101) {
        std::clog << "██████╗                      █╗   ██╗  ██╗     ██╗ ██╗" << std::endl;
        std::clog << "██╔══██╗  ████╗  ██████╗    ██║   ╚██╗██╔╝    ███║███║" << std::endl;
        std::clog << "██████╔╝██╔═══╝ ██╔═══██╗  █████╗  ╚███╔╝     ╚██║╚██║" << std::endl;
        std::clog << "██╔═══╝ ██║     ██║   ██║  ╚██╔═╝  ██╔██╗      ██║ ██║" << std::endl;
        std::clog << "██║     ██║     ╚██████╔╝   ██║   ██╔╝ ██╗     ██║ ██║" << std::endl;
        std::clog << "╚═╝     ╚═╝      ╚═════╝    ╚═╝   ╚═╝  ╚═╝     ╚═╝ ╚═╝\n" << std::endl;
        std::clog << "--------------Dev://BC | ProtX DirectX11--------------\n\n" << std::endl;
    } else {
        std::clog << "888~-_                     d8   Y88b    /          ,d    ,d" << std::endl;
        std::clog << "888   \\  888-~\\  e88~-_  _d88__  Y88b  /        ,d888 ,d888" << std::endl;
        std::clog << "888    | 888    d888   i  888     Y88b/           888   888" << std::endl;
        std::clog << "888   /  888    8888   |  888     /Y88b           888   888" << std::endl;
        std::clog << "888_-~   888    Y888   '  888    /  Y88b          888   888" << std::endl;
        std::clog << "888      888     \"88_-~   \"88_/ /    Y88b         888   888\n" << std::endl;
        std::clog << "----------------Dev://BC || ProtX DirectX11----------------\n\n" << std::endl;
    }
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
    std::clog << "[ProtX11 " << logLeveltoString(level) << "]: " << message << std::endl;
}
