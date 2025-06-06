#include <iostream>

using namespace std;

int soma(int vecSoma[5]);

int main() {
    int s[5] = {0};

    cout << "\033[1;34m";

    cout << "Digite 5 valores: " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Valor " << i + 1 << ": ";
        cin >> s[i];
    }

    cout << "Soma dos valores: " << soma(s);

    return 0;
}

int soma(int vecSoma[5]) {
    int soma = 0;
    for(int i = 0; i < 5; i++) {
        soma += vecSoma[i];
    }
    return soma;
}