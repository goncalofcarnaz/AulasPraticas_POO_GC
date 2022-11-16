#include <iostream>
#include<set>
#include <iterator>

using namespace std;

int main() {

    /**
     * Declarar e inicializar o SET
     */
     set<int> numeros = {12,13,14};
    /**
    * Ver o primeiro e último elemento
    */
    cout << ">> Show first and last elements --" << endl;
    cout << endl;
    set<int> :: iterator it; // criado o iterador para o SET números
    cout<<"Primeiro Elemento:"<<*(numeros.begin());     // begin()
    cout<<"\nUltimo Elemento:"<<*--(numeros.end())<<endl;   // end()
    /**
    * Mostrar todos os elementos
    */
    cout << endl;
    cout << ">> Show all elements of SET -- " << endl;
    cout << "Elementos SET: "; // usar o iterator
             for (auto it : numeros)
                      cout << it << " "; // Os elementos são devolvidos de forma ordenada
    /**
    * Traversal()
    */
    cout << endl;
    cout << ">> Show all elements of SET -- Another form" << endl ;
    for (auto it = numeros.begin(); it!=numeros.end(); it++)
    {
        cout<<" "<<*it;
    }
    /**
    * Verificar se o SET é vazio
    */
    cout << endl;
    cout << ">> Empty Set ? -- " << endl ;
    if(numeros.empty())    // empty()
        cout<<"Vazio" << endl;
    else
        cout<<"Com dados" << endl;;
    cout << endl;
    cout << ">> Empty Set ? -- " << endl ;

    cout << endl;
    cout << ">> Erase an element ? Primeiro e o 12 -- " << endl ;
    numeros.erase(numeros.begin());            // erase(iterator)
    numeros.erase(12);                             // erase(n)
    cout<<"\nAfter removing the first element and the element 12: ";
    for (auto it = numeros.begin(); it!=numeros.end(); it++)
    {
        cout<<" "<<*it;
    }
    cout << endl;
    cout << ">> Insert an element: 5 -- " << endl ;
    numeros.insert(5);                         // insert(n)
    cout<<"\nAfter inserting the new element 5: ";
    for (auto it = numeros.begin(); it!=numeros.end(); it++)
    {
        cout<<" "<<*it;
    }

    return 0;
}
