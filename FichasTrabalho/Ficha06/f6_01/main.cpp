//
//  main.cpp
//  f6_01

#include <iostream>
#include <random>
#include <ctime>
#include "peixe.h"
#include "aquario.h"
#include "piranha.hpp"

using namespace std;

double getRealUniform() {
    static default_random_engine e(time(0)); // This is a random number engine class that generates pseudo-random numbers.
    static uniform_real_distribution<double> d(0.0, 1.0); // Produces random floating-point values x
    return d(e);
}

int main(int argc, const char * argv[]) {
    
    /*
    default_random_engine re;
    for(int i = 0; i < 5; i++)
        cout << getRealUniform() << endl;
        //cout << re() << endl;
    
    cout << "Peixe *p1 -> " << *p1 << endl;
    cout << "Peixe *p2 -> " << *p2 << endl;
    cout << "Peixe *p3 -> " << *p3 << endl; */
    
    
    
    Peixe *p1 = new Peixe("Nemo", "laranja");
    Peixe *p2 = new Peixe("Dori");
    Peixe *p3 = new Piranha("Dory");
    Peixe *p4 = new Piranha("Nemo", "laranja", 15);
    
    Aquario *a = new Aquario; //  Os aquários são criados inicialmente sem peixe nenhum.
    a->addPeixe(p1);
    a->addPeixe(p2);
    a->addPeixe(p3);
    a->addPeixe(p4);
    cout << *a << endl;
    
    a->alimentaPeixes(5);
    cout << *a << endl;
    
   /* a->selfClean();
    cout << *a << endl;
    
    if (a->peixeExiste(501)){
        cout << "vou tirar o peixe\n";
        Peixe *saido = a->removePeixe(501);
        cout << *saido;
    }
    
    cout << a->peixeExiste(600) << endl;
    */
    
    delete a;
    
    return 0;
}
