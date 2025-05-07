#include <iostream>

using namespace std;

int power(int base, int expoente);

int main() {
    int base = 0, expoente = 0;
    
    cout << "Digite a base: "; cin >> base;
    cout << "Digite a expoente: "; cin >> expoente;
    
    cout << "Resultado da potência: " << power(base, expoente);
    
    return 0;
}

int power(int base, int expoente) {
    int valor = 1;
    
    if(expoente == 0) return 1;
    if(base == 0) return 0;
    if(expoente > 0) {
        for(int i = 1; i <= expoente; i++)
            valor *= base;
    }
    return valor;
}