#include <iostream>
#include <stdlib.h>

void list_estados();
void significado(int selc);

using namespace std;

int main(){
    int seleccion;
    list_estados();
    cout<<"Seleccione un color: "<<endl;
    cin>>seleccion;
    significado(seleccion);
    return 0;
}

void list_estados(){
    cout<<"Color"<<endl;
    cout<<"1.Rojo"<<endl;
    cout<<"2.Verde "<<endl;
    cout<<"3.Amarillo"<<endl;
}

void significado(int selc){
    if(selc == 1){
        cout<<"El significado de ["<<selc<<"] es NO pasar"<<endl;
    }else if(selc == 2){
        cout<<"El significado de ["<<selc<<"] es Adelante"<<endl;
    }else if(selc == 3){
        cout<<"El significado de ["<<selc<<"] es Precaucion"<<endl;
    }else {
        cout<<"ERROR: ["<<selc<<"] no está asociado a ningún color. "<<endl;
    }
}