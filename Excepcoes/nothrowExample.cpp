// nothrowExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/* 
    a constante nothrow é usado no operador new ou new[] para indicar que estas funcoes não enviam
    excepções quando falham, mas retornam um null pointer . 
    

*/


int main()
{

    try {
        while (true) {
            new int[100000000ul];   // overload
        }
    }
    catch (const std::bad_alloc& e) {
        cout << e.what() << '\n';
    }

    while (true) {
        int* p = new(std::nothrow) int[100000000ul]; // não envia a exepção de overload
        if (p == nullptr) {
            cout << "Retorna nullptr\n";
            break;
        }
    }

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
