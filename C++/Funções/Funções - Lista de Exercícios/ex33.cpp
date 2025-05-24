#include <iostream>

using namespace std;

void divDez(int n1, int n2, float &resultado1, float &resultado2);

int main() {
    int n1, n2;
    float r1, r2;

    cout << "Digite dois valores respectivamente: ";
    cin >> n1 >> n2;

    divDez(n1, n2, r1, r2);

    cout << "Resultado da divisão por 10: " << endl;
    cout << r1 << endl << r2 << endl;

    return 0;
}

void divDez(int n1, int n2, float &resultado1, float &resultado2) {
    resultado1 = (float) n1 / 10;
    resultado2 = (float) n2 / 10;
}