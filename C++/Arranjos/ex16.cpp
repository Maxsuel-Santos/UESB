#include <iostream>

using namespace std;

int main() {
    int vetor[11], v[10], pos = 0;
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    bool valor = false;

    for(int i = 0; i < tam; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for(int i = 0; i < 10; i++) {
        v[i] = vetor[i];
    }

    for(int i = 0; i < tam; i++) {
        if(vetor[10] == v[i]) {
            valor = true;
            pos = i;
            break;
        }
    }

    if(valor) {
        cout << "POSICAO: " << pos;
    }

    return 0;
}