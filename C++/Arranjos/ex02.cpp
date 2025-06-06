#include <iostream>

using namespace std;

void paridade(int vetor[5], int tamanho);

int main() {
    cout << "\033[1;32m";

    int vetor[5] = {0};
    unsigned int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for(int j = 0; j < tamanho; j++) {
        cout << "Valor " << j << ": ";
        cin >> vetor[j];
    }

    paridade(vetor, tamanho);

    return 0;
}

void paridade(int vetor[5], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] % 2 == 0) {
            vetor[i] = 1;
        } else {
            vetor[i] = -1;
        }
    } 

    for(int i = 0; i < tamanho; i++) {
        cout << "[ " << vetor[i] << "], ";
    }
}
