//
//  peixe.h
//  f6_01
//


#ifndef peixe_h
#define peixe_h

#include <string>
#include <iostream>
#include <sstream>
class Aquario; // inclusão circular --> A solução passa por um dos ficheiros A ou B desistir de incluir o outro e mencione apenas a existência
                                     // da classe que precisa

using namespace std;

class Peixe {


    string especie; // Nome da espécie (texto)  1)
    string cor; // Cor (texto)
    int peso ; // Peso (gramas)
    unsigned int numSerie; // Número de série (inteiro sempre crescente)

    static unsigned int conta; // Incrementar o número de série
    Aquario *aquario = nullptr;
    bool indigestao = false;
    unsigned int resta = 4; // eventos de alimentação até morrer
    
protected:
    bool setPeso(int g);
    int getPeso() const { return peso; }
    
public:
    Peixe(string es, string co = "cinzento"); // A cor é opcional, sendo “cinzento” se nada for especificado.

    Peixe(const Peixe &p);
    
    bool desligaAquario(Aquario *a);
    unsigned int getNserie() const { return numSerie; }
    bool isVivo() const { return (resta > 0); }

    virtual void come(unsigned int c);

    bool ligaAaquario(Aquario*);
    virtual string getAsString() const;
    
    virtual ~Peixe() { cout << "A destruir peixe\n"; }
};

ostream &operator<<(ostream &, const Peixe &);

#endif /* peixe_h */
