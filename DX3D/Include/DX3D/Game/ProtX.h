//
// Created by BasLocal on 08/06/2025.
//

#ifndef PROTX_H
#define PROTX_H
#include "Core.h"
#include "../Core/Base.h"

namespace ProtX11 {

class ProtX : public Base{
    public:
    ProtX();
    virtual ~ProtX() override;

    virtual void run() final;

    private:
        std::unique_ptr<Window> m_display{};
        bool m_isRunning{ true };
};

} // ProtX11

#endif //PROTX_H
