//
// Created by BasLocal on 08/06/2025.
//

#include <DX3D/Core/Base.h>
using namespace ProtX11;

Base::Base(const BaseDesc &desc): m_logger(desc.logger) {
}

Base::~Base() {
}

Logger &Base::getLogger() const noexcept {
    return m_logger;
}
