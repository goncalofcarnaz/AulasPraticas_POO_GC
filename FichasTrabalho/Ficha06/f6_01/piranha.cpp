//
//  piranha.cpp
//  f6_01
//

#include "piranha.hpp"

ostream &operator<<(ostream &os, const Piranha &p) {
    os << p.getAsString() << " ,comprimento: " << p.getComprimento() << endl;
    return os;
}

string Piranha::getAsString() const {
    ostringstream os;
    os << Peixe::getAsString() << ", comprimento " << comprimento;
    return os.str();
}
