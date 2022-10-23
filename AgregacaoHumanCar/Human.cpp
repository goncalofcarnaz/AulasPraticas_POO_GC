#include "Human.h"
#include <iostream>
#include <string>
using namespace std;



Human::Human(const std::string& str, Car car)
{
    name = str;
    myCar = car;
    
    myCar.liga();
}

Human::~Human()
{
    myCar.desliga();

}
