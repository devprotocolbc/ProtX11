//
// Created by BasLocal on 08/06/2025.
//

#ifndef GRAPHICSLOGUTIL_H
#define GRAPHICSLOGUTIL_H
#include "DX3D/Core/Logger.h"

namespace ProtX11 {
#define ProtXGraphicsLogErrorAndThrow(hr, message){\
    auto res = (hr);\
    if (FAILED(res)) {\
        ProtXLogErrorAndThrow(message);\
    }\
    }
}
#endif //GRAPHICSLOGUTIL_H
