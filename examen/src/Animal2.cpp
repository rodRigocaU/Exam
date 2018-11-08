#include "Animal2.h"

Animal2::Animal2()
{
    nombre = "No hay";
    nroPatas = 0;
}


void Animal2::hacerHablar()
{
     this->habla();

}

void Animal2::display()
{
    cout << nombre << " " << nroPatas << '\n';
}



