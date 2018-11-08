#ifndef ANIMAL2_H
#define ANIMAL2_H
#include <string>
#include <iostream>

using namespace std;


class Animal2
{
    public:
        Animal2();
        Animal2(string n,int p) : nombre(n),nroPatas(p) {}
        void habla(void) {}
        void hacerHablar();
        void display();

    protected:
        string nombre;
        int nroPatas;
};

#endif // ANIMAL_H


