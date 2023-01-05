// HerancaPolimorfismo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string m_name;

public:
    Animal(const string& name)
            : m_name{ name }
    {
    }
    const string& getName() const { return m_name; }
    virtual string Voz() const { return "SEM VOZ"; }

};

class Cat : public Animal
{
public:
    Cat(const string& name)
            : Animal{ name }
    {
    }
    string Voz() const override { return "Meow"; }
};

class Dog : public Animal
{
public:
    Dog(const string& name)
            : Animal{ name }
    {
    }

    string Voz() const override { return "Woof"; }
};


class AnimalAntigo : public Animal
{
public:
    AnimalAntigo(const string& name)
            : Animal{ name }
    {
    }
};

void report(const Animal& animal)
{
    cout << animal.getName() << " diz " << animal.Voz() << '\n';
}

int main()
{
    // Classe Derivadas
    Cat cat ("Gato1");
    Dog dog ("Cao1");
    report(cat);
    report(dog);





    // AnimalAntigo: Se	uma classe nao sobrescrever	um	metodo	virtual,
    // ela herda a implementacao original;
    AnimalAntigo AA("AnimalAntigo01");
    report(AA);




    Cat fredo{ "Fred" };
    Cat misterio{ "Misty" };
    Cat zeca{ "Zeke" };

    Dog galo{ "Garbo" };
    Dog poi{ "Pooky" };
    Dog tartaruga{ "Truffle" };

    // e com um array de ponteiros para objetos
    Animal* animais[]{ &fredo, &galo, &misterio, &poi, &tartaruga, &zeca };

    for (const auto* animal : animais)
        cout << animal->getName() << " diz " << animal->Voz() << '\n';






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
