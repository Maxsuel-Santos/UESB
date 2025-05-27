#include <iostream>

using namespace std;

int power(int base, int expoente = 1);

int main() {
    int base, expoente;

    cout << "Digite a base e o expoente respectivamente: ";
    cin >> base >> expoente;

    cout << power(base, expoente);

    return 0;
}

// O argumento default nunca deve ser declarado duas vezes, apenas uma, ou na declaração da funcção antes do main ou depois do main.
int power(int base, int expoente) {
    int resultado = 1;
    for(int i = 1; i <= expoente; i++) {
        resultado *= base;
    }
    
    return resultado;
}