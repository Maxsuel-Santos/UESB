#include <iostream>

using namespace std;

void contagemRegressiva(unsigned int valor);

int main() {
    int numero;

    cout << "Digite um valor: ";
    cin >> numero;

    contagemRegressiva(numero);

    return 0;
}

void contagemRegressiva(unsigned int valor) {
    cout << valor << " -> ";

    if(valor == 0)
        return;
    
    contagemRegressiva(valor - 1);
}
