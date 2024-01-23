#include <iostream>
#include <stdlib.h>

void list_planetas();
void distacia_sol(int selc);

using namespace std;

int main(){
    int seleccion;
    list_planetas();
    cout<<"Seleccione un planeta: "<<endl;
    cin>>seleccion;
    distacia_sol(seleccion);
    return 0;
}

void list_planetas(){
    cout<<"Planeta     /  Distancia medida del sol"<<endl;
    cout<<"1.Mercurio          59"<<endl;
    cout<<"2.Venus             108  "<<endl;
    cout<<"3.Tierra            150  "<<endl;
    cout<<"4.Marte             228  "<<endl;
    cout<<"5.Jupiter           750  "<<endl;
    cout<<"6.Saturno           1431  "<<endl;
    cout<<"7.Urano             2877  "<<endl; 
    cout<<"8.Neptuno           4509  "<<endl;
}

void distacia_sol(int selc){
    if(selc == 1){
        cout<<"La distacia es 59 "<<endl;
    }else if(selc == 2){
        cout<<"La distacia es 108"<<endl;
    }else if(selc == 3){
        cout<<"La distacia es 150"<<endl;
    }else if(selc == 4){
        cout<<"La distacia es 228"<<endl;
    }else if(selc == 5){
        cout<<"La distacia es 750"<<endl;
    }else if(selc == 6){
        cout<<"La distacia es 1431"<<endl;
    }else if(selc == 7){
        cout<<"La distacia es 2877"<<endl;
    }else if(selc == 8){
        cout<<"La distacia es 4509"<<endl;
    }else {
        cout<<"ERROR: ["<<selc<<"] no está asociado a ningún planeta. "<<endl;
    }
}
