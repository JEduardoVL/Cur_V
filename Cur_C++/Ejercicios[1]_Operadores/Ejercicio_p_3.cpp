/*
3.- La calificación final de un estudiante es el promedio de tres notas: 
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y 
la nota de participación que cuenta el 10% Escriba un programa que lea las tres notas del alumno y escriba su nota final.
*/
#include <iostream>
#include <stdlib.h>

float nota_final(int a, int b, int c);

using namespace std;

int main(){
    int prac,teo,part;
    cout<<"Calculadora de la nota final."<<endl;
    cout<<"Ingresa tu nota en practicas: "<<endl;
    cin>>prac;
    cout<<"Ingresa tu calificacion en la teoria: "<<endl;
    cin>>teo;
    cout<<"Ingresa calificacion de tus participaciones: "<<endl;
    cin>>part;
    cout<<"Tu calificacion final es: "<<nota_final(prac,teo,part)<<endl;

    return 0;
}

float nota_final(int a, int b, int c){
    float practicas = a *.3;
    float teoria = b *.6;
    float participacion = c *.1;
    return practicas + teoria + participacion;
}