// SmartPointsExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

using namespace std;

void usarO(unique_ptr<int> p)
{


}

void usarT(unique_ptr<int> &p)
{


}

int main()
{
    // Criar um UNIQUE_PTR --> std::unique_ptr<Type> p(new Type);
    unique_ptr<int>    p1(new int);
    
    
    unique_ptr<int[]>  p2(new int[50]);
   
    
    // std::unique_ptr<Object> p3(new Object("Lamp"));
    
    // std::unique_ptr<int[]> ptr_copy = p2; // ERRO! A c�pia n�o � permtida

    // usar(p2); ERRO! passar por valor
    // usarO(p1);

    // passar por refer�ncia
    usarT(p1);




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
