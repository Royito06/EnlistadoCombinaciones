#include <iostream>
#include "../Combinaciones.h"

using namespace std;

int CreaArreglo(int Tamanio, int* Arreglo)
{
    int n,r;
    cout<<"Introduzca el valor de n: ";
    cin>>n;
    cout<<"Introduzca el valor de r: ";
    cin>>r;

    Tamanio=Combinaciones(n,r);

    delete []Arreglo;

    Arreglo = new int[Tamanio];

    return Tamanio;

}
