#include <iostream>
#include <Perro.h>
#include <Loro.h>
#include <Gato.h>
#include <Animal2.h>
#include <Animalarray.h>

using namespace std;

int main()
{
    Perro A("Rikki", 4);
    Loro B("Piolin", 2);
    Gato C("Michino" , 4);

    A.habla();
    A.setraza("Labrador");
    A.displayraza();
    A.display();

    cout << '\n';

    B.habla();
    B.setplumaje("Colorido");
    B.displaypluma();
    B.display();

    cout << '\n';

    C.habla();
    C.setraza("Egipcio");
    C.displayraza();
    C.display();

    cout << '\n';

    Animal2 D("Yuyu",4);
    Animal2 F("Pico",2);
    Animal2 G("Luna",4);
    Animal2 T("Copo",4);
    Animal2 Y("Bolt",4);

    Animal2 arr[] = {D,F,G};


    Animalarray example(arr,3);
    example.print();

    cout << '\n';

    Animalarray example2;
    example2 = example;
    example2.print();

    cout << '\n';

    Animalarray example3,example4,example5,example6;
    example3.print();
    example3.newsize(3);
    example3.retsize();

    cout << '\n';

    example4 = example2;
    example4.pushback(T);
    example4.print();

    cout << '\n';

    example5 = example4;
    example5.Insertar(Y,1);
    example5.print();

    cout << '\n';

    example6 = example5;
    example6.borrar(1);
    example6.print();



    return 0;
}
