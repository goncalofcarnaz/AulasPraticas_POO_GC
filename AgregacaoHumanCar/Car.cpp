#include "Car.h"
#include <iostream>
using namespace std;


Car::Car()
{
    cout << "Construtor Car : Carro Construido !!!" << endl;
}

Car::~Car()
{
    cout << "Construtor Car : Carro Destruido !!!" << endl;
}


void Car::liga()
{
    cout << "Metodo Liga() : Vai ligar o carro."<<endl;
    myEng = new Engine();
}

void Car::desliga()
{
    cout <<"Metodo desliga() : Desligou o carro." << endl;
    delete myEng;
}