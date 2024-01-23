#include <iostream>
#include <stdlib.h>

void menu_fech();
void impresion(int op, int mes, int dia, int anno);
const char* imp_mes_op2(int mes);
const char* imp_mes(int mes);

using namespace std;

int main (){
    int mes,dia,anno,op;
    cout<<"Por favor ingrese una fecha (dia mes anno) :"<<endl;
    cin>>mes>>dia>>anno;
    menu_fech();
    cout<<"Ingrese la opcion deseada :"<<endl;
    cin>>op;
    impresion(op, mes, dia, anno);

    return 0;
}


void menu_fech(){
    cout<<"Como le gustaria mostrar la fecha?"<<endl<<endl;
    cout<<"Mes completo, dia , anno (Enero 11, 1999):   Ingrese [1] "<<endl;
    cout<<"Mes abreviado, dia, anno (Ene. 11, 1999):    Ingrese [2] "<<endl;
    cout<<"Mes en cifra/dia/anno (07/11/1999):          Ingrese [3] "<<endl<<endl;
}

void impresion(int op, int mes, int dia, int anno){
    switch (op)
    {
    case 1:
        cout<<"La fecha traducida es:  "<<imp_mes(mes)<<" "<<dia<<" "<<anno <<endl;
        break;
    case 2:
        cout<<"La fecha traducida es:  "<<imp_mes_op2(mes)<<" "<<dia<<" "<<anno <<endl;
        break;
    case 3:
        cout<<"La fecha traducida es:  "<<mes<<"/"<<dia<<"/"<<anno<<endl;
        break;
    
    default:
        cout<<"La opcion ingresada no es valida :(."<<endl;
        break;
    }
}

const char* imp_mes(int mes){
    switch (mes)
    {
    case 1:
        return "Enero";
    case 2:
        return "Febrero";
    case 3:
        return "Marzo";
    case 4:
        return "Abril";
    case 5:
        return "Mayo";
    case 6:
        return "Junio";
    case 7:
        return "Julio";
    case 8:
        return "Agosto";
    case 9:
        return "Septiembre";
    case 10:
        return "Octubre";
    case 11:
        return "Noviembre";
    case 12:
        return "Diciembre";
    default:
        return "Inválido";
    }
}

const char* imp_mes_op2(int mes){
    switch (mes)
    {
    case 1:
        return "Ene.";
    case 2:
        return "Feb.";
    case 3:
        return "Mar.";
    case 4:
        return "Abr.";
    case 5:
        return "May.";
    case 6:
        return "Jun.";
    case 7:
        return "Jul.";
    case 8:
        return "Ago.";
    case 9:
        return "Sep.";
    case 10:
        return "Oct.";
    case 11:
        return "Nov.";
    case 12:
        return "Dic.";
    default:
        return "Inválido";
    }
}
