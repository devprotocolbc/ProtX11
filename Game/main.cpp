#include <iostream>

#include "../DX3D/Include/DX3D/All.h"
//
// Created by BasLocal on 08/06/2025.
//
int main() {
    try {
        ProtX11::ProtX game{};
        game.run();
    } catch (const std::runtime_error&) {
        std::cerr << "Runtime error" << std::endl;
        return EXIT_FAILURE;
    } catch (const std::exception&) {
        std::cerr << "Exception" << std::endl;
        return EXIT_FAILURE;
    } catch (...) {
        std::cerr << "Unknown exception" << std::endl;
        return EXIT_FAILURE;
    }


    return EXIT_SUCCESS;
}
