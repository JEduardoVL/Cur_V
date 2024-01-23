#include <iostream>
using namespace std;

int main() {
    int totalGanado = 3000;
    int p1 = (totalGanado + 500) / 2;
    int p2 = totalGanado - p1;

    cout << "Persona 1 gana: $" << p1 << endl;
    cout << "Persona 2 gana: $" << p2 << endl;

    return 0;
}