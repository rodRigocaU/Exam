#include "Gato.h"
#include "string"
#include <iostream>

using namespace std;

Gato::~Gato()
{
    //dtor
}

void Gato::habla()
{
    cout << "Miau Miau Miau Miau" << '\n';
}

void Gato::setraza(string a)
{
    raza = a;
}

void Gato::displayraza()
{
    cout << raza << '\n';
}
