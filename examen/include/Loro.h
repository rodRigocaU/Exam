#ifndef LORO_H
#define LORO_H
#include "string"
#include "Animal.h"
#include "iostream"

using namespace std;


class Loro : public Animal
{
    public:
        Loro(string n,int p): Animal(n,p){}
        void habla();
        void setplumaje(string);
        void displaypluma();
        ~Loro();

    private:
        string pluma;
};

#endif // LORO_H
