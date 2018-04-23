/*
Programa_34 capturar e imprimir un vector con 7 valores enteros
Estructura repetitiva
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 11 de marzo de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system ("color f0");
    int x, vec [7];
    cout << "\n Vector de 7 valores enteros";
    cout << "\n\n Estructura repetitiva for \n";

    for (x=0; x<7; x=x+1)
        {
        cout<<"\n Dame un valor: ";
        cin>>vec[x];
        }

    cout<<"\n\n El vector resultante es: \n\n";

    for (x=0; x<7; x=x+1)
        {
        cout<<"\t "<<vec[x]<<"\n\n";
        }

    system ("pause");
    return 0;
}
