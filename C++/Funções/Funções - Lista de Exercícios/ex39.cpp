#include <iostream>

using namespace std;

template <typename T>
void multiplos(T& soma, T x, int n) {
    soma = 1;

    for(int i = 1; i <= n; i++) {
        soma += i * x;
    }
}

int main() {
    float x = 0, n = 0, soma = 0;

    cout << "Valor de x: "; cin >> x;
    cout << "Valor de n: "; cin >> n;

    multiplos(soma, x, n); // soma foi passado por referência

    cout << "Soma: " << soma;

    return 0;
}