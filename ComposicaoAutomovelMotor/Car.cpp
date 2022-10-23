#include "Car.h"
#include <iostream>
using namespace std;



void Car::liga()
{
    cout << " vai ligar o carro." << endl;
    myEng = new Engine();
}

void Car::desliga()
{
    cout << " desligou o carro." << endl;
    delete myEng;
}
