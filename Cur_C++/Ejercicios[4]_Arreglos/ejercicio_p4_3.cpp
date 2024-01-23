/*
Crea un programa en C++ donde el usuario ingrese 5 números, 
después estos números se debe de copiar a otro array multiplicados 
por 2 y muestre el segundo array.
*/

#include <iostream>
#include <stdlib.h>

void pedirDatos();
void datosMultiplicados(float datos[]);
void imprimir(float datos[], float datosMult[]);

using namespace std;

int main (){
    pedirDatos();
    return 0;
}

void pedirDatos(){
    float datos[5]={};
    for(int i=0;i<=4;i++){
        cout<<"Ingrese 5 ditados dato ["<< (i+1)<<"] "<<endl;
        cin>>datos[i];
    }
    datosMultiplicados(datos);

}

void datosMultiplicados(float datos[]){
    float datosMult[5]={};
    for(int i=0;i<=4;i++){
        datosMult[i] = datos[i] * 2;
    }
    imprimir(datos,datosMult);
}

void imprimir(float datos[], float datosMult[]){
    cout<<endl<<endl;
    cout<<"Datos del primer y segundo arreglo. "<< endl;
    for(int i=0;i<=4;i++){
        cout<<datos[i]<<" - "<<datosMult[i]<<endl;
    }

}