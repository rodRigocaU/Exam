#include "Animalarray.h"
#include "Animal2.h"
#include "iostream"
using namespace std;

Animalarray::Animalarray(const Animal2 arr[], int sizE)
{
    this->sizE = sizE;
    pointer = new Animal2[sizE];
    for(int x = 0;x < sizE; x++)
    {
        pointer[x] = arr[x];
    }
}

Animalarray::~Animalarray()
{

    delete(pointer);

}

Animalarray::Animalarray(Animalarray &n)
{
    sizE = n.sizE;
    pointer = new Animal2[n.sizE];
    for(int x = 0; x < n.sizE; x++)
    {
        pointer[x] = n.pointer[x];
    }

}

void Animalarray::newsize(int newsizE)
{
    Animal2 *pointer2 = new Animal2[newsizE];
    int mini = (newsizE > sizE) ? sizE : newsizE;
    for(int x = 0; x < mini ;x++)
    {
        pointer2[x] = pointer[x];
    }
    delete [] pointer;
    sizE = newsizE;
    pointer = pointer2;
}

void Animalarray::pushback(Animal2 &a)
{
    newsize(sizE + 1);
    pointer[sizE - 1] = a;
}

void Animalarray::Insertar( Animal2 &q, int pos)
{
    newsize(sizE + 1);
    Animal2 temp ;
    for(int x = sizE - 1; x > pos ;  x--)
    {
        temp = pointer[x];
        pointer[x] = pointer[x - 1];
        pointer[x - 1] = temp;
    }
    pointer[pos] = q;

}


void Animalarray::retsize()
{
    cout << sizE << '\t';
}


void Animalarray::borrar(int pos)
{

    Animal2 *pointer2 = new Animal2[sizE];
    this->sizE = sizE - 1;
    for(int x = 0; this->sizE > x;)
    {
        if(x != pos)
            pointer2[x] = pointer[x];
            x++;
    }
    delete(pointer2);
    pointer = pointer2;
}

void Animalarray::print()
{
    for(int x = 0;x < sizE; x++)
    {
        (pointer + x)->display();
    }
}

