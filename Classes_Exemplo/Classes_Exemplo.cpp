// Classes_Exemplo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;


static int contador;



class automovel {
    int cilindrada;
    string cor;
    int id;
public:

    /*
        Construtor: 
           	
            - fun��o que � chamada sempre que � criado um objeto de uma classe - faz a inicializa��o
            - tem o mesmo nome da classe
            - deve ser declarado como p�blico
            - permite o overloading
            
    */
 
    automovel() {  // Construtor por omiss�o
        this->cilindrada = 1000; // this, ponteiro "hidden" que � passado a todos os membros n�o est�ticos
        this->cor = "verde";
        id = ++contador;
        cout << "Construtor por omissao ..." << "Automovel " << id << endl;

        // o construtor n�o pode retornar nenhum valor 
    }


    automovel(int cilind, string cor) { // construtor com parametros
        this->cilindrada = cilind;
        this->cor = cor;
        id = ++contador;
        cout << "Construtor com parametros ..." << "Automovel " << id << endl;
    }



    automovel(const automovel& obj) // Construtor por c�pia
    {
        cilindrada = obj.cilindrada;
        cor = obj.cor;
        id = ++contador;
        cout << "Construtor por copia\n";

    }

 
    /*
       Destrutor: fun��o que � chamada sempre que o ambito de dura��o do objeto de uma classe encerra-se - faz a "limpeza"
       -  N�o podem ser chamados explicitamente pelo programador.
   */

    ~automovel() { // destrutor
        // n�o tem argumentos, e permite fazer a "limpeza" 
        contador--;
        cout << "A destruir automovel " << id << endl;
    }

    string getAsString() const {
        ostringstream bufferO;
        bufferO << "Cilindrada: " << cilindrada << " -> " << "Cor: " << cor << "\n";
        return bufferO.str();
    }


    // GETTERS e SETTERS

};



int main() {

    automovel a; // construtor por omissao

    cout << "O Automovel A->" << a.getAsString();


    automovel b(1200, "Amarelo");

    cout << "O Automovel B->" <<  b.getAsString();


    automovel c(a);

    cout << "O Automovel C->" << c.getAsString();



    return 0;
}
