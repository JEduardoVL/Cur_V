// Calcular el area de la figura

#include <iostream>
#include <stdlib.h>

float area_semic(int radio, float pi);
int area_triangulo(int altura, int base);

using namespace std;

int main() {
    int radio = 10;
    int altura = 13;
    float pi = 3.1416;
    float semi_circulo = area_semic(radio, pi);
    int triangulo = area_triangulo(altura, radio); 
    cout << "El area de la figura es [" << semi_circulo + triangulo << "]" << endl;
    return 0;
}

float area_semic(int radio, float pi) {
    return (pi * (radio * radio)) / 2;  
}

int area_triangulo(int altura, int base) {
    return (base * altura) / 2;
}