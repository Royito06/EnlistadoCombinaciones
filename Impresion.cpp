#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void procesarCombinacion(const int* s, int r, ofstream& csvFile,int& conteoGenerados)
{

    cout << "{ ";
    for (int i = 0; i < r; ++i) {
        cout << s[i] << (i < r - 1 ? " " : " ");
    }
    cout << "}" << endl;

    for (int i = 0; i < r; ++i) {
        csvFile << s[i];
        if (i < r - 1) {
            csvFile << ",";
        }
    }
    csvFile << "\n";

    ++conteoGenerados;
}


void generarCombinaciones(int n,int& conteoGenerados, int r, const string& filename = "combinaciones.csv")
{


    if (n < 1 || r < 0 || r > n)
    {
        cerr << "Error: n debe ser ≥ 1 y 0 ≤ r ≤ n" << endl;
        return;
    }

    // En caso de error
    ofstream csvFile(filename);
    if (!csvFile.is_open())
    {
        cerr << "Error al crear el archivo " << filename << endl;
        return;
    }

    // Si r es 0, osea una combinacion vacia
    if (r == 0)
    {
        cout << "{ }" << endl;
        csvFile << "\n";
        csvFile.close();
        return;
    }


    int* s = new int[r];


    for (int i = 0; i < r; ++i) {
        s[i] = i + 1;
    }


    procesarCombinacion(s,r, csvFile,conteoGenerados);

    // Generar combinaciones restantes
    while (true) {
        // Encontrar el índice más a la derecha que puede incrementarse
        int m = r - 1;
        int val_max = n;

        while (m >= 0 && s[m] == val_max) {
            --m;
            --val_max;
        }

        // Si no hay más combinaciones, terminar
        if (m < 0) {
            break;
        }

        // Incrementar el elemento en posición m
        ++s[m];

        // Actualizar elementos posteriores
        for (int j = m + 1; j < r; ++j) {
            s[j] = s[j - 1] + 1;
        }

        // Procesar la nueva combinación
        procesarCombinacion(s,r, csvFile,conteoGenerados);
    }

    // Liberar memoria y cerrar archivo
    delete[] s;
    csvFile.close();

    cout << "\nCombinaciones guardadas en " << filename << endl;
}




