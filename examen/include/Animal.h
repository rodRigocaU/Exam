#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;


class Animal
{
    public:
        Animal(string n,int p) : nombre(n),nroPatas(p) {}
        virtual void habla(void) {}
        void hacerHablar();
        void display();

    protected:
        string nombre;
        int nroPatas;
};

#endif // ANIMAL_H
