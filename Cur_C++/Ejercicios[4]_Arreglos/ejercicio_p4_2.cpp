/*
Crea un programa en C++ donde el usuario ingrese 10 números, 
5 para un array y 5 para otro array distinto. Mostrar los 10 números
en pantalla mediante un solo array.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int arreglo_1[5] = {};
    int arreglo_2[5] = {};
    int arregloFinal[10] = {};

    for (int i = 0; i <= 9; i++) {
        if (i <= 4) {
            cout << "Ingrese el numero para el arreglo 1 en la posicion [" << (i + 1) << "]" << endl;
            cin >> arreglo_1[i];
            arregloFinal[i] = arreglo_1[i];
        } else {
            cout << "Ingrese el numero para el arreglo 2 en la posicion [" << (i - 4) << "]" << endl;
            cin >> arreglo_2[i - 5]; 
            arregloFinal[i] = arreglo_2[i - 5];
        }
    }

    cout << "Los datos almacenados en los arreglos son :" << endl;
    for (int j = 0; j < 15; j++) {
        if(j<=4){
            cout<<arreglo_1[j]<<" - "<< arreglo_2[j]<<endl;
        }
        else{
            cout<<arregloFinal[j-5]<<"  ";
        }
    }

    return 0;
}