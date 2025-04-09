#include <iostream>
#include "../Combinaciones.h"

using namespace std;

int CreaArreglo(int Tamanio, int* &Arreglo,int n, int r)
{


    Tamanio=Combinaciones(n,r);

    delete []Arreglo;

    Arreglo = new int[n];

    for(int i=0;i<n;i++)
    {
        Arreglo[i]=i+1;
    }

    return Tamanio;
    return n;

}
