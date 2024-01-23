/*
Crea un programa en C++ donde el usuario ingrese 10 números, 
después estos se deben de guardar en un array, para finalmente 
imprimir su promedio.
*/

#include <iostream>
#include <stdlib.h>

void pedirDatos();
void sumarProm(float datos[]);

using namespace std;

int main(){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    float datos[10]={};
    for(int i=0;i<=9;i++){
        cout<<"Ingrese 10 datos, dato num. ["<< (i+1)<<"]: "<<endl;
        cin>>datos[i];
    }
    sumarProm(datos);
}

void sumarProm(float datos[]){
    float datoSum=0;
    for(int i=0;i<=9;i++){
        datoSum += datos[i];
    }
    cout<<endl<<endl;
    cout<<"El promedio de los 10 datos es : "<< (datoSum /10)<<endl;
}