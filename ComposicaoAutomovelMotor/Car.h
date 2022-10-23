#pragma once

#ifndef CAR_H
#define CAR_H
#include "Engine.h"

class Car
{
public:
    Car();
    ~Car();
    Engine* myEng;
};
#endif // CAR_H