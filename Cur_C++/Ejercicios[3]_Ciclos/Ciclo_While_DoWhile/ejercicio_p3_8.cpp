//Mostrar en pantalla la tabla del 6
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int tabla =6, i = 1;
    do
    {
        cout<<tabla<<" x "<<i<<" = "<< tabla * i<<endl;
        i +=1;
    } while (i<=10);
    
    return 0;
}