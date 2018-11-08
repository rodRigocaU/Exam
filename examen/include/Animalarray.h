#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H
#include <Animal2.h>

class Animalarray
{
    public:

        Animalarray() : sizE(0) , pointer(new Animal2[sizE]) {}
        Animalarray(const Animal2[], int);
        ~Animalarray();
        Animalarray(Animalarray &n);
        void newsize(int);
        void pushback(Animal2 &a);
        void Insertar( Animal2&,int);
        void borrar(int);
        void print();
        void retsize();
    private:
        int sizE;
        Animal2 *pointer;

};

#endif // ANIMALARRAY_H
