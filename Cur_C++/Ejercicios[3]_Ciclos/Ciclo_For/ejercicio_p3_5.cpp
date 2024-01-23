// Muestre los numeros impares que haya del 1 al 100
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(i%2 != 0){
            cout<<i<<" ";
        }
    }
    return 0;
}