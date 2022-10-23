// FicheiroStringStream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    string file = "../FicheiroStringStream/myfilestream.txt"; // Caminho Relativo
    fstream fin(file.c_str()); // c_str() -> Retorna um ponteiro para um array que contêm uma sequência de carateres - Null terminated

    string i;
    int j, k;
    string line;
    istringstream iss;
    while (getline(fin, line)) {
        iss.clear();
        iss.str(line);
        iss >> i >> j >> k;
        cout << "i=" << i << ",j=" << j << ",k=" << k << endl;
    }
    fin.close();
    return(0);
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
