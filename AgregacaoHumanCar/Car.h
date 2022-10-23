#pragma once
#ifndef CAR_H
#define CAR_H
#include "Engine.h"
#include <string>
using namespace std;



class Car
{
public:
    int id;
    static int contador;
    Car();
    //~Car();
    void liga();
    void desliga();
  
    Engine* myEng;
};



#endif // CAR_H