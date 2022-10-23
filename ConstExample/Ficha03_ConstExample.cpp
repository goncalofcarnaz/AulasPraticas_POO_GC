// Ficha03_ConstExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Automovel {
private:
    int velocidade;
    int travao;
public:
    Automovel() : velocidade(0), travao(0) {};
    
    // garante que os dados (member data) são read - only
    int getVelocidade() const {
        return velocidade;
    }
    // Para verificar que os membros são read-only, altere o código:
    // return velocidade++;
    

    void setAcelerador(int a) {
        velocidade = velocidade + a;
    }
};


int main()
{
    Automovel a;
    std::cout << a.getVelocidade();
}
