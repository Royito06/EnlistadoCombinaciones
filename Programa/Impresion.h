#ifndef IMPRESION_H_INCLUDED
#define IMPRESION_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void procesarCombinacion(const int* s, int r, ofstream& csvFile,int& conteoGenerados);
void generarCombinaciones(int n ,int& conteoGenerados, int r, const string& filename = "combinaciones.csv");

#endif // IMPRESION_H_INCLUDED
