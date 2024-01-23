/*
Realice un programa en C++ para mostrar las tablas de multiplicar. 
El programa debe de mostrar un menú con las tablas del 1 al 10, 
el usuario debe de elegir cual tabla desea que se imprima en pantalla, 
el usuario también puede elegir hasta qué número se va a mostrar la tabla, 
por ejemplo la tabla del 5 hasta el número 20. Al final de mostrar la tabla 
el usuario puede elegir si desea regresar al menú o finalizar el programa.
*/
#include <iostream>
#include <stdlib.h>

void menu();
void tabla_m(int op);

using namespace std;

int main(){
    menu();
    return 0;
}

void menu(){
    int op;
    cout<<"_________Menu__________"<<endl;
    for(int o=1;o<=10;o++){
        cout<<o<<"] Tabla del: "<<o<<endl;
    }
    cout<<endl<<"Ingrese la opcion deseada: "<<endl;
    cin>> op;
    if(op<=10)
    {
        tabla_m(op);
    }else{
        cout<<endl<<"Opcion no valida"<< endl;
    }
    
}

void tabla_m(int op){
    char continu;
    int lim;
    cout<<"Ingresa el numero limite de la tabla: "<<endl;
    cin>>lim;
    for(int i=1;i<=lim;i++){
        cout<<op<<" x "<<i<<" = "<<op*i<<endl;
    }
    cout<<endl<<"Deseas regresar al menu o salir (M / S)"<<endl;
    cin>>continu;
    if(continu == 'M' || continu == 'm'){
        menu();
    }else{
        exit(0);
    }
    
}