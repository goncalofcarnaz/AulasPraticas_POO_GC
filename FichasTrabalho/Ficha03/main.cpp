//
//  main.cpp
//  f3_01


#include <iostream>
#include <vector>
#include "ponto.h"
#include "retangulo.hpp"
#include "desenho.hpp"

using std::cout;
using std::endl;
using std::vector;

int main(int argc, const char * argv[]) {
    
    Ponto p1(1,2);
    cout << "p1: " << p1.getAsString() << "\n";
    
    Retangulo a(p1, 5, 10);
    cout << "a: " << a.getAsString() << "\n";
    cout << "area: " << a.area() << "\n";
    
  
    
    return 0;
}
