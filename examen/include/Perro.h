#ifndef PERRO_H
#define PERRO_H
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;


class Perro : public Animal
{
    public:
        Perro(string n,int p): Animal(n,p){}
        void habla();
        void setraza(string);
        void displayraza();
    private:
        string raza;
};

#endif // PERRO_H
