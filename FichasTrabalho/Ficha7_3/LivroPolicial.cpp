#include "LivroPolicial.h"

LivroPolicial::LivroPolicial(string titulo, string autor, string ISBN, string detetive, int tiros)
    :Livro(titulo,autor,ISBN), nomeDetetive(detetive), numTiros(tiros){
}
LivroPolicial::LivroPolicial(const LivroPolicial & obj):Livro(obj), nomeDetetive(obj.nomeDetetive), numTiros(obj.numTiros) {
    cout << endl << "--- construtor por cópia LivroPolicial ---" << endl;
}

LivroPolicial::~LivroPolicial(){
    cout << "---- Destruir livro Policial ----" << endl;
}
string LivroPolicial::getAsString() const{
    ostringstream os;
    Livro::getAsString();
    os << " | Detetive: " << nomeDetetive <<
       " | NºTiros: " << numTiros << endl;

    return os.str();
}

void LivroPolicial::imprime( ostream & os ) const{
    Livro::getAsString();
    os << " | Detetive: " << nomeDetetive <<
        " | NºTiros: " << numTiros << endl;
}

void LivroPolicial::imprime() const{
    Livro::imprime();
    cout << " | Detetive: " << nomeDetetive <<
         " | NºTiros: " << numTiros << endl;
}

LivroPolicial &LivroPolicial::operator=(const LivroPolicial &obj) {
    Livro::operator=(obj);
    nomeDetetive = obj.nomeDetetive;
    numTiros = obj.numTiros;

    return *this;
}