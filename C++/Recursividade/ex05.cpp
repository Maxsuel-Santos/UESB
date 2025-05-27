#include <iostream>

using namespace std;

int multiplicacao(unsigned int num, unsigned int num2);

int main() {
    int a, b;

    cout << "Digite 2 valores em sequencia: ";
    cin >> a >> b;

    cout << multiplicacao(a, b);

    return 0;
}

// Sem usar o operador de multiplicação (*)
int multiplicacao(unsigned int num, unsigned int num2) {
    if(num2 == 0)
        return 0;
    return num + multiplicacao(num, num2 - 1);
}
