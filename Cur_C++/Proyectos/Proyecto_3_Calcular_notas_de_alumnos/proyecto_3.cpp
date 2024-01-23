/*
Crea un programa en C++ para guardar las notas de N alumnos, N tiene que ser mayor o igual que 20 
o menor o igual que 30, esto se debe de verificar en el programa, y en caso de que el numero de 
alumnos este fuera del rango se debe de mostrar la opción de ingresar de nuevo el numero de alumnos.

Una vez que tengamos los notas guardadas dentro de un arreglo, hay que sumar todas las calificaciones,
mostrar el promedio del salón, mostrar el alumno con nota mas alta, mostrar alumnos con nota promedio 
(rango de promedio – 1 a promedio + 1) y el alumno con menor nota.

A los alumnos que tiene una nota menor o igual a 6 se les encargo un trabajo, este trabajo suma un 
punto mas a su nota. Se debe de utilizar el arreglo con las notas originales para generar otro arreglo 
con las notas modificadas de estos alumnos. Imprimir las dos notas en columnas diferentes.

Al final se debe de mostrar la opción para volver a calcular mas notas de alumnos, o finalizar el programa.
*/
#include <iostream>
#include <stdlib.h>

bool ciclado();
void numeroDatos();
bool verificarNum(int num);
void guardarDatos(int numAlumnos);
void promedio(float calificaciones[], int numAlumnos);
void notaAlta(float calificaciones[],int numAlumnos,int max);
void notaMedia(float calificaciones[], int numAlumnos, float promedio);
void trabajoExtra(float calificaciones[],int numAlumnos);

using namespace std;

int main(){
    ciclado();
    return 0;
}

bool ciclado() {
    do {
        char op;
        numeroDatos();
        cout << endl << "Deseas ingresar nuevos datos? (S/N): ";
        cin >> op;
        if (op == 'S' || op == 's') {
        } else {
            return false; 
        }
    } while (true);
}

void numeroDatos() {
    int numAlumnos;
    do {
        cout << "Ingresa el numero de alumnos: ";
        cin >> numAlumnos;
        if (verificarNum(numAlumnos)) {
            guardarDatos(numAlumnos);
            break; 
        } else {
            cout << "El numero de alumnos debe estar entre 20 y 30. Intenta de nuevo." << endl;
        }
    } while (true);
}

bool verificarNum(int num){
    return (num >= 5 && num <= 10);
}

void guardarDatos(int numAlumnos){
    float calificaciones[numAlumnos]={};
    for(int i=0;i<numAlumnos;i++){
        cout<<"Calificacion del alumno ["<<(i+1)<<"] :"<<endl;
        cin>>calificaciones[i];
    }
    promedio(calificaciones,numAlumnos);
}

void promedio(float calificaciones[], int numAlumnos){
    float suma =0;
    float max =0;
    for(int i=0;i<=numAlumnos;i++){
        suma += calificaciones[i];
        if (calificaciones[i]>max){
            //Calcular la nota mas alta
            max=calificaciones[i];
        }
    }
    float promedio =suma/numAlumnos;
    cout<<endl<<"El promedio de los ["<<numAlumnos<<"] Alumnos es: "<<promedio<<endl;
    notaAlta(calificaciones,numAlumnos,max);
    notaMedia(calificaciones,numAlumnos,promedio);
    trabajoExtra(calificaciones,numAlumnos);
}

void notaAlta(float calificaciones[],int numAlumnos,int max){
    for (int i = 0; i <=numAlumnos; i++)
    {
        if (calificaciones[i] == max)
        {
            cout<<endl<<"El Alumno ["<<(i+1)<<"] tiene la nota mas alta: ["<<max<<"]"<<endl;
        }
    }
}

void notaMedia(float calificaciones[], int numAlumnos, float promedio) {
    float notasMedianas[numAlumnos] = {};
    int numMedianas = 0;
    cout <<endl<< "Los alumnos con notas medias son:" << endl;
    for (int i = 0; i < numAlumnos; i++) {
        if (calificaciones[i] >= (promedio - 1) && calificaciones[i] <= (promedio + 1)) {
            notasMedianas[numMedianas] = calificaciones[i];
            numMedianas++;
        }
    }
    if (numMedianas == 0) {
        cout << "No hay alumnos con notas medias." << endl;
    } else {
        for (int i = 0; i < numMedianas; i++) {
            cout <<endl<< "Alumno con nota de: " << notasMedianas[i] << endl;
        }
    }
}

void trabajoExtra(float calificaciones[], int numAlumnos) {
    float notasModificadas[numAlumnos];
    cout << endl << "Alumnos a los que se les asigno un trabajo extra:" << endl << endl;
    for (int i = 0; i < numAlumnos; i++) {
        notasModificadas[i] = calificaciones[i]; 
        if (calificaciones[i] <= 6) {
            notasModificadas[i] = calificaciones[i] + 1; 
        }
        cout << "Alumno [" << (i + 1) << "] con nota [" << calificaciones[i] << "] y nueva nota de [" << notasModificadas[i] << "]" << endl;
    }
}