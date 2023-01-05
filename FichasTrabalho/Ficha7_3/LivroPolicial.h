#ifndef FT_7_3_LIVROPOLICIAL_H
#define FT_7_3_LIVROPOLICIAL_H

#include "Livro.h"

class LivroPolicial: public Livro {
public:
    LivroPolicial(string titulo, string autor, string ISBN, string nomeDetetive, int numTiros);
    LivroPolicial(const LivroPolicial & obj);
    ~LivroPolicial() override;
    string getAsString() const override;
    void imprime(ostream &os) const;
    void imprime() const override;
    LivroPolicial &operator=(const LivroPolicial & obj);
private:
    string nomeDetetive;
    int numTiros;
};
//ostream &operator<<(ostream &os, const LivroPolicial &livro);

#endif //FT_7_3_LIVROPOLICIAL_H
