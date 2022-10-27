//
//  retangulo.cpp
//  f3_01


#include "retangulo.cpp"
#include <sstream>

using std::ostringstream;

Retangulo::Retangulo(const (...), double alt, double lar) : (...), (...), largura(lar) {
  
  // (....)
}

Retangulo::Retangulo(const Retangulo &r) : (...)((...), r.altura, r.largura) {
    
}
Retangulo::~Retangulo() {
    std::cout << " a destruir: " << getAsString() << "\n";
}

string Retangulo::getAsString() const {
    ostringstream os;
    os << "retangulo com canto superior esquerdo em " << cse.getAsString();
    os << " altura " << altura << " largura " << largura;
   (...)
}

double Retangulo::area() const { return altura * largura; }

void Retangulo::setCanto(const Ponto &nc) {
    cse = nc;
}
