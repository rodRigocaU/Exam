#include "Loro.h"
#include "string"
#include <iostream>

using namespace std;

Loro::~Loro()
{
    //dtor
}

void Loro::habla()
{
    cout << "Ciki Ciki Ciki" << '\n';
}

void Loro::setplumaje(string a)
{
    pluma = a;
}

void Loro::displaypluma()
{
    cout << pluma << '\n';
}
