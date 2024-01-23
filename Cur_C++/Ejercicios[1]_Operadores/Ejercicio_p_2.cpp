/*
2.- Escriba un programa que lea las tres notas de un alumno y calcule la nota final media de dicho alumno (Promedio).
*/
#include <iostream>
#include <stdlib.h>

int promedio(int p1,int p2,int p3);

using namespace std;

int main(){
    int p1,p2,p3;
    cout<<"Calculadora de promedios."<<endl;
    cout<<"Ingrese la primer nota: "<<endl;
    cin>>p1;
    cout<<"Ingrese la segunda nota: "<<endl;
    cin>>p2;
    cout<<"Ingrese la tercer nota: "<<endl;
    cin>>p3;
    cout<<"Tu promedio es: "<<promedio(p1,p2,p3)<<endl;

    return 0;
}


int promedio(int p1,int p2,int p3){
    return (p1 + p2 + p3) / 3;
}