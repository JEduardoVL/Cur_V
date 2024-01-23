// Ingresar el ultimo término de la serie mostrado a continuación: 
//2, 4, 6, 8,10,….., n; mostrar la suma total de la serie completa en la pantalla.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int fin, i = 2;
    cout<<"Ingrese el numero final de la serie: "<<endl;
    cin>>fin;
    cout<<endl<<"La serie es: "<<endl;
    while (i<=fin)
    {
        cout<<i<<" ";
        i +=2;
    }
    
    return 0;
}