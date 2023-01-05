#ifndef FT_7_3_LIVRO_H
#define FT_7_3_LIVRO_H

#include <iostream>
#include <sstream>

using namespace std;

class Biblioteca;

class Livro {
public:
    Livro(string titulo, string autor, string ISBN);

    Livro(const Livro & obj);
    virtual ~Livro();
    void alteraTitulo(string titulo);
    string obtemTitulo() const;
    string obtemAutor() const;
    string obtemISBN() const;
    bool estaBiblioteca(Biblioteca *obj);
    bool deixaBiblioteca(Biblioteca *obj);
    virtual string getAsString() const;
    virtual void imprime() const;
    friend bool operator== (const Livro& l1, const Livro& l2);
    Livro &operator=(const Livro & obj);
    //friend ostream &operator<<(ostream &os, const Livro &p);
private:
    string titulo;
    string autor;
    string ISBN;
    Biblioteca * biblioteca = nullptr;
};

ostream &operator<<(ostream &os, const Livro &p);



#endif //FT_7_3_LIVRO_H
