//
// Created by BasLocal on 08/06/2025.
//
#pragma once
#ifndef BASE_H
#define BASE_H
#include "DX3D/Core/Common.h"


namespace ProtX11 {
    class Base {
    public:
        explicit Base(const BaseDesc &desc);

        virtual ~Base();

        virtual Logger &getLogger() const noexcept final;

    protected:
        Base(const Base &) = delete; //copy constructor method
        Base(Base &&) = delete; //move constructor method
        Base &operator =(const Base &) = delete; //copy assignment operator
        Base &operator =(Base &&) = delete; //move assigment operator

    protected:
        Logger &m_logger;
    };
}


#endif //BASE_H
