#include <iostream>
#include <limits>


using namespace std;
int main() {
    int number=0;

    while (true)
    {
        cout << "Digite um numero: ";
        cin >> number;

        if (cin.fail()) // Se nada for introduzido, sera verdade
        {
            cout<<"Digite um numero valido!!\n";

            cin.clear(); // bits reset
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore() para limpar a entrada errada

            continue; // O loop irá correr novamente
        }

        // Para limpeza de entradas adicionais
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

       if (number <= 0) // positivo ou negativo
        {
            cout<<"menor que zero!!\n";
            continue;
        }
        break;
    }

    cout << "O número introduzido é: " << number << '\n';
}


// adaptado de: https://java2blog.com/input-validation-cpp/