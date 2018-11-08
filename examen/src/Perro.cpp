#include "Perro.h"
#include "string"
#include <iostream>


using namespace std;

void Perro::habla()
{
    cout << "Wuaf Wuaf Wuaf" << '\n';
}

void Perro::setraza(string a)
{
    raza = a;
}

void Perro::displayraza()
{
    cout << raza << '\n';
}
