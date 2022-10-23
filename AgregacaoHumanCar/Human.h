#pragma once
#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Car.h"

class Human
{
public:
    std::string name{};
    Car myCar;
    Human(const std::string& str, Car car);
    ~Human();

};
#endif 