// Namespace : This file contains the 'main' function. Program execution begins and ends there.
/*
 * Como declarar ?
 *
namespace  namespace_name
{
    // declarar aqui o que necessitamos agrupar no namespace , i.e. variáveis  (int a;) ou ...
    method (void add();)
    classes ( class student{};)
}
 *  Vantagem:
 *  Em projetos grandes, onde existe a possibilidade de nomes iguais (funções, metodos, até classes), o uso de namespace permite segmentar essa informação de uma forma simples;
 *
 */

// para mais informações e aprofundar da matéria ir a : https://en.cppreference.com/w/cpp/language/namespace

#include <iostream>

using namespace std;

// namespace DataStore
namespace DataStore {
	// lista de funcoes que compoem este namespace
    void Dummyfunc() {
        cout << "Inside DataStore (dummy)" << endl;
    }
}

// namespace DataStore
namespace UserInterface {
    int val = 200;
	// lista de funcoes que compoem este namespace
    void Dummyfunc() {
        cout << "Inside UserInterface (dummy)" << endl;

    }
}

int val = 100;
// Nested Namespaces
namespace primeiroNamespace {
    void nestedDummyfunc() {
        cout << "Inside primeiroNamespace (dummy)" << endl;
    }
    namespace segundoNamespace {
        void nestedDummyfunc() {
            cout << "Inside segundoNamespace (dummy)" << endl;
        }
    }
}


using namespace  primeiroNamespace::segundoNamespace;
using namespace DataStore;
using namespace UserInterface;


int main()
{
    // Sem usar a declaracao using namespace | para testar comentar todos os using
    DataStore::Dummyfunc();
    UserInterface::Dummyfunc();

    // Usar ... using namespace X
    Dummyfunc(); // DataStore
    UserInterface::Dummyfunc() // como existe um conflito de nomes, o compilador necessita de saber - quem é quem !
    // nested namespaces
    nestedDummyfunc(); // acede ao segundoNamespace.


    // Variaveis globais VS variáveis em namespaces
    cout << val;
    cout << UserInterface::val;

    return 1;
}

