//
//  peixe.cpp
//  f6_01
//


#include <stdio.h>
#include "peixe.h"
#include "aquario.h"

unsigned int Peixe::conta = 500; // Incrementar o número de série

double getRealUniform(); // gera número aleatório (float)

/** 4)
  A construção dos objectos exige sempre o nome da espécie. A cor é opcional, sendo
 “cinzento” se nada for especificado. O peso inicial é de 10 g. O número de série é um
 valor automaticamente atribuído aumentando de um em um a cada novo peixe criado
 explicitamente (a construção por cópia não aumenta este valor). O primeiro peixe tem o
 valor 500
 */

Peixe::Peixe(string es, string co) : especie(es), cor(co), numSerie(conta++) {
    peso = 10; // O peso inicial é de 10 g.
}

// 3) Obter a descrição textual em string.
string Peixe::getAsString() const {
    ostringstream os;
    os << "n serie: " << numSerie << ", especie: " << especie << ", cor: "<< cor << ", peso: " << peso;
    return  os.str();
}

ostream &operator<<(ostream &os, const Peixe &p) {
    os << p.getAsString();
    return os;
}

bool Peixe::ligaAaquario(Aquario *a) {
    if (aquario != nullptr || a == nullptr)
        return false;
    aquario = a;
    return true;        
}

bool Peixe::desligaAquario(Aquario *a) {
    if (aquario != a)
        return false;

    aquario = nullptr;
    return true;
}

/** 2)
 *  Ser alimentado com uma dada quantidade em gramas de alimento que é somada ao seu
        peso. Se a soma da quantidade de alimento oferecida ao peixe com o seu peso
        ultrapassar 50g:
            - Em 50% dos casos o peixe reduz o seu peso a 40g (limite de peso – peso inicial de um
            novo peixe) e gera um novo peixe;
            - Em 50% dos casos o peixe emagrece 50%, não come nada nas 4 vezes seguintes em
            que o aquário distribuir alimentos e morre na vez seguinte
 */
void Peixe::come(unsigned int c) {
    if (indigestao) {
        if (resta > 0)
            --resta;
        return;
    }
    
    peso += c;
    if (peso > 50) {
        // Em 50% dos casos o peixe reduz o seu peso a 40g (limite de peso – peso inicial de um novo peixe) e gera um novo peixe;
        if (getRealUniform() < 0.5) {
            Peixe *peixinho = new Peixe(especie + "D", cor);
            aquario->addPeixe(peixinho);
            peso = 40;
        }
        // Em 50% dos casos o peixe emagrece 50%, não come nada nas 4 vezes seguintes em que o aquário distribuir alimentos e morre na vez seguinte
        else {
            indigestao = true;
            peso /= 2;
        }
    }
}



bool Peixe::setPeso(int g) {
    if (g < 0)
        return false;
    
    peso = g;
    return true;
}

/**
 * O número de série é um valor automaticamente atribuído aumentando de um em um a cada novo peixe criado
   explicitamente (a construção por cópia não aumenta este valor)
 * @param p
 */
Peixe::Peixe(const Peixe &p) {
    numSerie = p.numSerie;
    cor = p.cor;
    especie = p.especie;
    peso = p.peso;
    indigestao = p.indigestao;
    resta = p.resta;
    
    if (p.aquario != nullptr)
        p.aquario->addPeixe(this);
    else
        p.aquario = nullptr;
}
