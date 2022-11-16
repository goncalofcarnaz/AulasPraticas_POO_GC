// MapExampleCars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>

using namespace std;

int main()
{
    // key-pair value
    map<string, int> mapCars;
    // insere dados no Map
    mapCars.insert(make_pair("Ford Mustang", 1));
    mapCars.insert(make_pair("Dodge Challenge", 2));
    mapCars["Dodge Charger"] = 3;
    // substitui o valor da chave "Ford Mustang"
    mapCars["Ford Mustang"] = 4;
    mapCars["AAA"] = 5;
    mapCars["B"] = 7;
    map<string, int>::iterator it = mapCars.begin();

    while (it != mapCars.end())
    {
        cout << it->first << " :: " << it->second << endl;
        it++;
    }
    // Check if insertion is successful or not
    if (mapCars.insert(make_pair("Ford Mustang", 3)).second == false)
    {
        cout << "O Elemento com a chave 'Ford Mustang' nao foi inserida porque ja existe!" << endl;
    }
    else
    {
        map<string, int>::iterator it = mapCars.begin();

        while (it != mapCars.end())
        {
            cout << it->first << " :: " << it->second << endl;
            it++;
        }

    }
    // Searching element in std::map by key.
    if (mapCars.find("Dodge Challenge") != mapCars.end())
        cout << "palavra 'Dodge Challenge' encontrada!" << endl;
    if (mapCars.find("Renault") == mapCars.end())
        cout << "palavra 'Renault' não encontrada!" << endl;
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
