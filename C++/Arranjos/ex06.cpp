#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A[5] = {0}, B[5];
    int tam = sizeof(A) / sizeof(A[0]);

    for(int i = 0; i < tam; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> A[i];
        B[i] = pow(A[i], 2);
    }

    /*
        NOTA: Em termos computacionais de larga escala, não é viável utilizar o cmath, pois no c++ ele irá carregar códigos À parte de uma outra biblioteca, o que irá aumentar o processamento do programa, que irá incluir mais uma biblioteca. Neste caso, seria melhor apenas B[i] = A[i] * A[i];
    */

    for(int i : A) {
        cout << "[" << i << "], ";
    }
    cout << endl;
    for(int i : B) {
        cout << "[" << i << "], ";
    }

    return 0;
}