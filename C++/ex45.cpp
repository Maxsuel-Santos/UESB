/*
(45) Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número 
elevado ao segundo. Não utilize a função de potência da linguagem. 
*/

#include <iostream>

using namespace std;

int main() {
    int base = 0, expoente = 0; 
    long long int resultado = 1;

    cout << "Informe a base: "; 
    cin >> base;

    cout << "Informe expoente: "; 
    cin >> expoente;

    if(expoente == 0) {
        resultado = 1;
    } else if(expoente > 0) {
        for(int i = 1; i <= expoente; i++) {
            resultado *= base;
        }
    } else {
        cout << "Não foi possível.";
    }

    cout << resultado;
    
    return 0;
}