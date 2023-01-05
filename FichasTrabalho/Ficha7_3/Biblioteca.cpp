#include "Biblioteca.h"
#include "Livro.h"

Biblioteca::Biblioteca(string morada):morada(morada){
  cout << " --- A criar biblioteca --- " << morada << endl;
}

Biblioteca::~Biblioteca(){
    cout << "--- Destruir biblioteca ---" << endl;
    livros.clear();
}

bool Biblioteca::adicionaLivro(Livro * livro) {        // adiciona um novo livro à biblioteca
    cout << "A tentar adicionar Livro" << endl;
    if (livro == nullptr)
        return false;
    if (livro->estaBiblioteca(this) == false)
        return false;
    livros.push_back(livro);
    return true;
}
void Biblioteca::removeLivro(string ISBN)  {
    auto it = livros.begin();
    while (it < livros.end()) {
        if((*it)->obtemISBN() == ISBN){
            if ((*it)->deixaBiblioteca(this) == true) // desassociar (liberta) o livro da biblioteca
                livros.erase(it);
        }
        ++it;
    }
}

string Biblioteca::getAsString() const{
    ostringstream os;
    os << "Lista de Livros na Biblioteca: " << morada << endl;
    for(auto it : livros){
        //os << (*it).getAsString() << endl;
        (*it).imprime();
    }
    return os.str();
}

void Biblioteca::imprime() const{
    cout << "Lista de Livros na Biblioteca: " << morada << endl;
    for(auto it : livros){
        //os << (*it).getAsString() << endl;
        (*it).imprime();
    }
}
Biblioteca::Biblioteca(const Biblioteca & obj){
    //todo:
    int contador = 0;
    cout << endl << "--- construtor por cópia Biblioteca---" << endl;
    this->morada = obj.morada;

    auto it = obj.livros.begin();
    while (it < obj.livros.end()) {
        //(**it).imprime();
        //Livro * tmp = new Livro(**it);
        if(this->adicionaLivro(new Livro(**it)))
            contador++;
        ++it;
    }
    if(contador == obj.livros.size())
        cout << endl << "Foram copiados todos os livros..." << livros.size() <<  endl;
}
Biblioteca &Biblioteca::operator=(const Biblioteca & obj){
    cout << "----- OPERATOR= ------ " << endl;
    if(this == &obj)
        return *this;

    if(obj.livros.size() == 0)    // se a origem estiver vazia devolve a origem
        return *this;

    cout << "Livros na Biblioteca: " << this->livros.size() << endl;
    if( this->livros.size() > 0 ) { // se não estiver vazio -- prepara a biblioteca para receber uma cópia dos livros que se pretende copiar
        cout << "--- Entrei em modo destrói livro --- operador= ---" << endl;
        morada = obj.morada;
        this->livros.clear();
    }

    auto it = obj.livros.begin();
    while (it < obj.livros.end()) {
        if(this->adicionaLivro(new Livro(**it))){}
        ++it;
    }

    return *this;
}