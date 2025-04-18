#include <iostream>
#include <iomanip>

#include "Combinaciones.h"
#include "Impresion.h"
#include "capturaSegura.tpp"

using namespace std;

int main()
{
    int n, r;

    cout << "GENERADOR DE COMBINACIONES EN ORDEN LEXICOGR\265FICO\n";

    int intentosFallidos=0;


    while(true)
    {
        if (intentosFallidos!=0)
        {
            cout<<"\nEl n\243mero introducido n debe ser mayor o igual a 1 y entero.\n";
        }

        cout<<"Ingrese el total de elementos (n) con n >= 1: ";
        cin>>n;
        if (capturaSegura(n)&&n>=1)
            break;

        intentosFallidos++;
    }

    intentosFallidos=0;
    while(true)
    {
        if (intentosFallidos!=0)
        {
            cout<<"\nEl n\243mero introducido r debe ser un entero y menor o igual a n.\n";
        }

        cout<<"Ingrese el tama\244o de la combinaci\242n (r) con r <= n: ";
        cin>>r;
        if (capturaSegura(r)&&r<=n)
            break;

        intentosFallidos++;
    }



    cout<<"\nEl conjunto se generara con numeros de 1 a "<<n<<"\n";

    cout << "\nGenerando combinaciones de un conjunto de tama\244o " << n << " en cadenas de tama\244o " << r <<":\n";

    string filename;
    cout << "\nIngrese el nombre del archivo CSV: ";

    cin.ignore();
    cin>>filename;

    int combinacionesGeneradas=0;
    generarCombinaciones(n,combinacionesGeneradas, r, filename);
    cout<<"\nEl total de combinaciones generadas fue: "<<combinacionesGeneradas<<"\n";

    long combinacionesTeoricas=Combinaciones(n,r);
    cout<<"\nEl n/243mero de combinaciones calculadas con la formula del coeficiente binomial C(n,r) es: "<<combinacionesTeoricas<<"\n";

    if(combinacionesGeneradas==combinacionesTeoricas)
    {
        cout<<"\nComo se puede ver la cantidad de ambas es la misma.\n";
    }else
    {
        cout<<"\nLa cantidad obtenida en ambas difiere";
    }

    return 0;
}
