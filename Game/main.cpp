#include <iostream>

#include "DX3D/All.h"
//
// Created by BasLocal on 08/06/2025.
//
int main() {
    try {
        ProtX11::ProtX game({ProtX11::Logger::LogLevel::Info});
        game.run();
    } catch (const std::runtime_error &) {
        return EXIT_FAILURE;
    } catch (const std::exception &) {
        return EXIT_FAILURE;
    } catch (...) {
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
