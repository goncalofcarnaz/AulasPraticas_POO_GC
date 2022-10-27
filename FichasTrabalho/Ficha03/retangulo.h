//
//  retangulo.hpp
//  f3_01
//


#include <stdio.h>
#include "ponto.h"

class Retangulo {
    Ponto cse; //canto superior esquerdo
    double altura, largura;
    
public:
    Retangulo(const Ponto &p, double alt, double lar);
    Retangulo((...));
    ~Retangulo();
    
    string getAsString() const;
    
    double area() const;
    
    void setCanto((...));
};


