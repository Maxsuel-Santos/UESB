#include <iostream>

using namespace std;

int main() {
    int vetor[10] = {0}, v = 0, pos = 0;
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    bool valor = false;

    for(int i = 0; i < tam; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Informe o 11º valor: ";
    cin >> v;     

    // Vale apenas para o primeiro valor encontrado
    for(int i = 0; i < tam; i++) {
        if(vetor[i] == v) {
            valor = true;
            pos = i;
            break;
        }
    }

    if(valor) {
        cout << "VALOR ENCONTRADO E ESTA NA POSICAO: " << pos;
    } else {
        cout << "\033[1;31m" << "VALOR NAO ENCONTRADO!" << "\033[m";
    }

    return 0;
}