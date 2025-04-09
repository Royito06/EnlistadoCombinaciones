#include <iostream>
#include <iomanip>
#include "Captura.h"

using namespace std;

int main()
{
    cout <<setw(90)<<"Este programa calcula las combinaciones de n en r y escribe todas ellas" << endl;
    cout<<endl<<endl;

    int ArregloTam=0;

    int* Arreglo= nullptr;
    ArregloTam=CreaArreglo(ArregloTam,Arreglo);

    cout<<"Las combinaciones de n en r son: "<<ArregloTam;

    return 0;
}
