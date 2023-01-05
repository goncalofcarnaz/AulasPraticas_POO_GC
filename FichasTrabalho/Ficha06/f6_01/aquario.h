//
//  aquario.h
//  f6_01
//


#ifndef aquario_h
#define aquario_h

#include <vector>
#include "peixe.h"

using namespace std;

class Aquario {
    vector<Peixe *> peixes; // Uma quantidade de peixes. Eventualmente muitos 5)
    
public:
    Aquario() = default; //  Os aquários são criados inicialmente sem peixe nenhum.
    Aquario(const Aquario &) = delete;
    
    Peixe *removePeixe(unsigned int n);
    bool addPeixe(Peixe *p);
    string getAsString() const;
    void alimentaPeixes(unsigned int c);
    void selfClean();
    bool peixeExiste(unsigned int n) const;
    
    Aquario &operator=(const Aquario &) = delete;
    ~Aquario();
};

ostream &operator<<(ostream &os, const Aquario &p);

#endif /* aquario_h */
