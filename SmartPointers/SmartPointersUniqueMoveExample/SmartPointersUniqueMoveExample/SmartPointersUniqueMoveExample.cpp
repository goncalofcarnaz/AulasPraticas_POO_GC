// SmartPointersUniqueMoveExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory> // for std::unique_ptr
#include <utility> // for std::move

using namespace std;

class Recurso
{
public:
	Recurso() { std::cout << "Recurso Adquirido\n"; }
	~Recurso() { std::cout << "Recurso Destruido\n"; }

	friend std::ostream& operator<<(std::ostream& out, const Recurso& res)
	{
		out << "Sou o recurso !!!\n";
		return out;
	}
};

void obtemOwnership(std::unique_ptr<Recurso> res)
{
	if (res)
		cout << *res << '\n';
} // O Recurso é destruido aqui !!!


int main()
{
	unique_ptr<Recurso> r1(new Recurso{}); 
	unique_ptr<Recurso> r2{}; //  nullptr

	cout << "r1 is " << (static_cast<bool>(r1) ? "nao e nulo\n" : "nulo\n");
	cout << "r2 is " << (static_cast<bool>(r2) ? "nao e nulo\n" : "nulo\n");

	
	r2 = move(r1); // r2 assume a posse (ownership), r1 colocado a null

	cout << "Posse(Ownership) transferida\n";

	cout << "r1 is " << (static_cast<bool>(r1) ? "nao e nulo\n" : "nulo\n");
	cout << "r2 is " << (static_cast<bool>(r2) ? "nao e nulo\n" : "nulo\n");

	obtemOwnership(move(r2));


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
