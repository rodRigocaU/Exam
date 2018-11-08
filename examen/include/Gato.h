#ifndef GATO_H
#define GATO_H
#include <Animal.h>
#include "iostream"
#include <string>

using namespace std;


class Gato : public Animal
{
    public:
        Gato(string n,int p): Animal(n,p){}
        void habla();
        void setraza(string);
        void displayraza();
        virtual ~Gato();

    private:

        string raza;

};

#endif // GATO_H
