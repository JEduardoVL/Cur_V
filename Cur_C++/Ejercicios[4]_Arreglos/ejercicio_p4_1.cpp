/*
 Crea un programa en C++ donde el usuario ingrese 10 números, 
 después todos estos se deben de almacenar en un array para 
 finalmente mostrar en pantalla la suma, resta, multiplicación 
 y división de todos los elementos.
*/

#include <iostream>
#include <stdlib.h>

void pedirDatos();
void sumaDatos(float numeros[10]);
void restaDatos(float numeros[10]);
void multiplicacionDatos(float numeros[10]);
void divisionDatos(float numeros[10]);

using namespace std;

int main(){
    
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int max=10;
    float numeros[10]={};
    for(int i=0; i <=(max-1);i++){
        cout<<"Ingrese el dato numero "<<(i+1)<<endl;
        cin>>numeros[i];
    }
    cout<<endl<<endl;
    sumaDatos(numeros);
    restaDatos(numeros);
    multiplicacionDatos(numeros);
    divisionDatos(numeros);
}

void sumaDatos(float numeros[10]){
    int resultado =0;
    for(int i=0;i<=9;i++){
        resultado += numeros[i];
    }
    cout<<"La suma de los numeros es: "<<resultado<<endl;
}

void restaDatos(float numeros[10]){
    int resultado =0;
    for(int i=0;i<=9;i++){
        resultado -= numeros[i];
    }
    cout<<"La resta de los numeros es: "<<resultado<<endl;
}

void multiplicacionDatos(float numeros[10]){
    int resultado =1;
    for(int i=0;i<=9;i++){
        resultado *= numeros[i];
    }
    cout<<"La multiplicacion de los numeros es: "<<resultado<<endl;
}

void divisionDatos(float numeros[10]){
    float resultado =0;
    for(int i=0;i<=9;i++){
        resultado += numeros[i];
    }
    cout<<"La division de los numeros es: "<<(resultado/10)<<endl;
}