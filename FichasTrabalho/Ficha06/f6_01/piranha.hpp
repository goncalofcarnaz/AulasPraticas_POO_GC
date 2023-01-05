//
//  piranha.hpp
//  f6_01
//


#ifndef piranha_hpp
#define piranha_hpp

#include <iostream>
#include "peixe.h"

class Piranha : public Peixe {
    size_t comprimento;
    
public:
    Piranha(string esp, string co = "branco", size_t comp = 12) :
        Peixe(esp+"Piranha", co), comprimento(comp) {}
    
    size_t getComprimento() const { return comprimento; }
    virtual void come(unsigned int q) override { setPeso(2 * getPeso()); }
    virtual string getAsString() const override;
    
    virtual ~Piranha() { cout << "A destruir piranha\n"; }
};

ostream &operator<<(ostream &, const Piranha &);

#endif /* piranha_hpp */
