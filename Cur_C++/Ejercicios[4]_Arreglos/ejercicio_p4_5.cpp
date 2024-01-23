/*
Crea un programa en C++ donde el usuario ingrese el sueldo diario de 10 empleados, 
después calcular cuanto se le paga a cada uno por semana, mes y año, determinar cual 
es el empleado con mayor sueldo, y determinar cual es el empleado con menor sueldo. 
Al final imprimir todos los resultados en pantalla.
*/

#include <iostream>
#include <stdlib.h>

void pedirDatosEmp();
void sueldoSemanal(float sueldo[]);
void sueldoMensual(float sueldoSem[]);
void sueldoAnual(float sueldoMen[]);
void mejorPagado(float sueldoAnual[]);
void peorPagado(float sueldoAnual[], float max);

using namespace std;

int main(){
    pedirDatosEmp();
    return 0;
}

void pedirDatosEmp(){
    cout<<endl;
    cout<<"Ingresa los sueldos de 10 empleados. "<<endl;
    float sueldo[10]={};
    cout<<endl;
    for(int i=0;i<=9;i++){
        cout<<"Ingrese los datos del empleado ["<<(i+1)<<"] "<<endl;
        cin>>sueldo[i];
    }
    sueldoSemanal(sueldo);
}

void sueldoSemanal(float sueldo[]){
    float sueldoSem[10]={};
    for(int i=0;i<=9;i++){
        // Se supondra que se trabajan los 7 dias de la semana :((
        sueldoSem[i] = sueldo[i] * 7;
    }
    cout<<endl<<endl;
    cout<<"El suedo semanal de los empleados sera: "<<endl;
    cout<<endl;
    for(int j=0;j<=9;j++){
        cout<<"Empleado ["<<(j+1)<<"]: "<<sueldoSem[j]<<endl;
    }
    sueldoMensual(sueldoSem);
}

void sueldoMensual(float sueldoSem[]){
    float sueldoMen[10]={};
    for(int i=0;i<=9;i++){
        sueldoMen[i] = sueldoSem[i] * 4;
    }
    cout<<endl<<endl;
    cout<<"El suedo Mensual de los empleados sera: "<<endl;
    cout<<endl;
    for(int j=0;j<=9;j++){
        cout<<"Empleado ["<<(j+1)<<"]: "<<sueldoMen[j]<<endl;
    }
    sueldoAnual(sueldoMen);
}

void sueldoAnual(float sueldoMen[]){
    float sueldoAn[10]={};
    for(int i=0;i<=9;i++){
        sueldoAn[i] = sueldoMen[i] * 12;
    }
    cout<<endl<<endl;
    cout<<"El suedo Anual de los empleados sera: "<<endl;
    cout<<endl;
    for(int j=0;j<=9;j++){
        cout<<"Empleado ["<<(j+1)<<"]: "<<sueldoAn[j]<<endl;
    }

    mejorPagado(sueldoAn);
}

void mejorPagado(float sueldoAnual[]){
    float max=0;
    for(int i=0;i<=9;i++){
        if (sueldoAnual[i]>max)
        {
            max=sueldoAnual[i];
        }
    }
    cout<<endl<<endl;
    cout<<"El empleado mejor pagado tiene el sueldo de: "<<max<<endl;
    peorPagado(sueldoAnual,max);

}

void peorPagado(float sueldoAnual[],float max){
    int min=max;
    for(int i=0;i<=9;i++){
        if (sueldoAnual[i]<min)
        {
            min=sueldoAnual[i];
        }
    }
    cout<<endl;
    cout<<"El empleado peor pagado tiene el sueldo de: "<<min<<endl;
    cout<<endl<<endl;
}


