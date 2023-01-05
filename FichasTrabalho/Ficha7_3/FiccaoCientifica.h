#ifndef FT_7_3_FICCAOCIENTIFICA_H
#define FT_7_3_FICCAOCIENTIFICA_H

#include "Livro.h"

class FiccaoCientifica:public Livro {
public:
    FiccaoCientifica(string titulo, string autor, string ISBN, string planeta, int ano, bool isRealista);
    FiccaoCientifica(const FiccaoCientifica & obj);
    ~FiccaoCientifica() override;
    string getAsString() const override;
    void imprime(ostream &os) const;
    void imprime() const override;
    FiccaoCientifica &operator=(const FiccaoCientifica & obj);
private:
    string planeta;
    int ano;
    bool isRealist;
};
//ostream &operator<<(ostream &os, const FiccaoCientifica &livro);

#endif //FT_7_3_FICCAOCIENTIFICA_H
