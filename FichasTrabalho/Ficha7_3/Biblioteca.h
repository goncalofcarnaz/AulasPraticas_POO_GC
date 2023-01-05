#ifndef FT_7_3_BIBLIOTECA_H
#define FT_7_3_BIBLIOTECA_H

#include "Livro.h"
#include<vector>

using namespace std;

class Biblioteca {
public:
    Biblioteca(string morada);
    Biblioteca(const Biblioteca & obj);
    ~Biblioteca();
    bool adicionaLivro(Livro * obj);
    void removeLivro(string ISBN);
    string getAsString() const;
    void imprime() const;
    Biblioteca &operator=(const Biblioteca &);
private:
    string morada;
    vector<Livro *> livros;
};

#endif //FT_7_3_BIBLIOTECA_H
