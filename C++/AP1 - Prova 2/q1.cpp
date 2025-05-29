#include <iostream>

using namespace std;

int contarDigitos(int valor) {
    if(valor < 10)
        return 1;
        
    return contarDigitos(valor / 10) + 1;
}

int main() {
    int valor = 0;

    cout << "Informe um valor: ";
    cin >> valor;

    int quant = contarDigitos(valor);

    cout << "Quantidade de digitos de digitos: " << quant;

    return 0;
}