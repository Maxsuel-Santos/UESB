#include <iostream>

using namespace std;

int somaDigitos(int num);

int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    cout << "Soma dos dígitos: " << somaDigitos(numero) << endl;

    return 0;
}

int somaDigitos(int num) {
    if(num < 10) return num;
    return (num % 10) + somaDigitos(num / 10);
}