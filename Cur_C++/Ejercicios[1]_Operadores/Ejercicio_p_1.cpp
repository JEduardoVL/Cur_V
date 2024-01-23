#include <iostream>
#include <stdlib.h>

int formula_a(int n1, int n2);
int formula_b(int n1, int n2, int n3, int n4);
int formula_c(int n1, int n2, int n3, int n4, int n5, int n6);
int formula_d(int n1, int n2, int n3, int n4);

using namespace std;

int main (){
    int a,b,c,d,e,f;
    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    cout<<"Ingrese el valor de c: "<<endl;
    cin>>c;
    cout<<"Ingrese el valor de d: "<<endl;
    cin>>d;
    cout<<"Ingrese el valor de e: "<<endl;
    cin>>e;
    cout<<"Ingrese el valor de f: "<<endl;
    cin>>f;
    cout<<"Resultado usando la formula A: "<<formula_a(a,b)<<endl;

    cout<<"Resultado usando la formula B: "<<formula_b(a,b,c,d)<<endl;

    cout<<"Resultado usando la formula C: "<<formula_c(a,b,c,d,e,f)<<endl;

    cout<<"Resultado usando la formula D: "<<formula_d(a,b,c,d)<<endl;

    return 0;
}


int formula_a(int n1, int n2){
    return (n1/n2)+1;
}

int formula_b(int n1, int n2, int n3, int n4){
    return (n1+n2)/(n3+n4);
}

int formula_c(int n1, int n2, int n3, int n4, int n5, int n6){
    return ((n1 + (n2/n3))/(n4 + (n5/n6)));
}

int formula_d(int n1, int n2, int n3, int n4){
    return (n1 + (n2 / (n3-n4)));
}