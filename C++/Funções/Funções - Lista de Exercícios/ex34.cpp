#include <iostream>

using namespace std;

bool ehPrimo(int valor);
void doisPrimos(int valor, int &menor, int &maior);

int main() {
    int valor = 0, menor = 0, maior = 0;

    cout << "Digite um valor: ";
    cin >> valor;

    if(ehPrimo(valor))
        cout << "O numero e primo!" << endl;
    else
        cout << "O numero nao primo!" << endl;

    doisPrimos(valor, menor, maior);

    cout << "Maior primo menor que " << valor << ": " << menor << endl; 
    cout << "Maior primo maior que " << valor << ": " << maior << endl; 

    return 0;
}

bool ehPrimo(int valor) {
    if(valor <= 1)
        return false;
    else {
        for(int i = 2; i <= valor / 2; i++){ // ou i <= sqrt(valor) -> Mais otimizado
            if(valor % i == 0)
                return false;
        }
    }

    return true;
}

void doisPrimos(int valor, int &menor, int &maior) {
    for(int i = valor - 1; i >= 2; i--) {
        if(ehPrimo(i)) {
            menor = i;
            break;
        }
    }

    for(int i = valor + 1; true; i++) {
        if(ehPrimo(i)) {
            maior = i;
            break;
        }
    }
}
