#include <iostream>
#include <iomanip>
#include "Captura.h"
#include "Impresion.h"

using namespace std;

int main()
{
    cout <<setw(90)<<"Este programa calcula las combinaciones de n en r y escribe todas ellas" << endl;
    cout<<endl<<endl;

    int ArregloTam=0;

    int* Arreglo= nullptr;

    int n,r;
    cout<<"Introduzca el valor de n: ";
    cin>>n;
    cout<<"Introduzca el valor de r: ";
    cin>>r;

    ArregloTam=CreaArreglo(ArregloTam,Arreglo,n,r);

    cout<<"Las combinaciones de n en r son: "<<ArregloTam;
    cout<<endl<<endl;
    ImpresionArreglo(Arreglo,n);

    delete[] Arreglo;

    return 0;
}
