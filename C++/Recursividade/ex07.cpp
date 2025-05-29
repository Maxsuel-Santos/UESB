#include <iostream>

using namespace std;

int somaDigitos(int valor);

int main() {
    int valor;

    cout << "Digite um valor: ";
    cin >> valor;

    cout << "A soma dos algarismos de " << valor << " e igual a " << somaDigitos(valor);

    return 0;
}

int somaDigitos(int valor) {
    valor = abs(valor);
    if(valor < 10) {
        return valor;
    } 

    return (valor % 10) + somaDigitos(valor/10);
}
