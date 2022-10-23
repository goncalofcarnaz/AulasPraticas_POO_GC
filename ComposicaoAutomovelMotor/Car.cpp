#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
    cout << "Vamos ligar o carro." << endl;
    myEng = new Engine();
}

Car::~Car()
{
    delete myEng;
    cout << "Carro desligado." << endl;
}


