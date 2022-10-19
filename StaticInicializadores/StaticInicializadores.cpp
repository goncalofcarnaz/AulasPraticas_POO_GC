// StaticInicializadores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Pessoa {
public:
    Pessoa(int i, long bi); // construtor
    long getIdade() const; // função constante
    void AlterarDados(int idade, long bi); // testar o facto de BI ser uma variável const
private:
    int idade;
    const long BI; // dado constante
    int id;
    static int contador; // variável estática
        /*
            Membro estático (declarado com prefixo static):
                – tem uma única cópia (alocada estaticamente) (mesmo que não exista qualquer objecto da classe), em vez de uma cópia
                por cada objecto da classe
                – guarda um dado de forma permanente a toda a classe
                – parecido com variável global, mas possui âmbito (scope) de classe
                – tem de ser declarado dentro da classe (com static) e definido fora da classe (sem static), podendo ser inicializado onde é definido        

        
        */

};
Pessoa::Pessoa(int i, long bi): BI(bi) {
    // inicializador de membro
    /*
    * 
        Quando existe uma constante, por exemplo: "const long BI" , 
        um inicializador de membro (também utilizável com dados não constantes) tem de ser
        fornecido para dar ao construtor os valores iniciais do objecto
    */
    idade = i;
    id = ++contador;
}

/*
* Retire o comentário e verifique que não consegue modificar o valor de BI. pk? é constante 
* 
void Pessoa::AlterarDados(int i, long bi)
{
    idade = i;
    BI = bi;
}
*/

long Pessoa::getIdade() const
{
    return idade;
}


 
int Pessoa::contador = 0;  // Obrigatório: Inicializar a variável estática.

int main()
{
    
    Pessoa a(32, 12345678);
    cout << a.getIdade();
    

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
