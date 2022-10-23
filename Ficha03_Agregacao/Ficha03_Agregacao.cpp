// Ficha03_Agregacao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Professor
{
private:
    std::string m_name{};

public:
    Professor(const std::string& name)
        : m_name{ name }
    {
        cout << "Professor Criado !!!" << endl;
    }
    ~Professor()
    {
        cout << "Professor Destruido !!!" << endl;
    }

    const std::string& getName() const { return m_name; }
};

class Departamento
{
private:
    const Professor& m_Professor; // Guarda informação de apenas um professor 

public:
    Departamento(const Professor& Professor)
        : m_Professor{ Professor }
    {
        cout << "Departamento Criado com o " << Professor.getName() << endl;
    }
    ~Departamento()
    {
        cout << "Departamento Destruido " << endl;
    }
};

int main()
{
    // Criar um professor fora do ambito do Departamento
    Professor P{"Pedro"};
    
    { // inicio do scope do departamento
        // Cria o departamento com o professor como parametro
        
        Departamento Departamento{ P };

    } // fim do scope do departamento

    // João ainda existe

    std::cout << P.getName() << " ainda existe!\n";

    return 0;
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
