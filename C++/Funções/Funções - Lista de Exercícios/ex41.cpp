#include <iostream>

using namespace std;

template <typename T>

T next(T valor) {
    return valor + 1;
}

int main() {
    int op;
    cout << "Escolha o tipo de entrada:\n";
    cout << "[1] Inteiro\n";
    cout << "[2] Caractere\n";
    cout << "Sua opção: ";
    cin >> op;

    if(op == 1) {
        int num;
        cout << "Digite um número inteiro: ";
        cin >> num;
        cout << "Valor consecutivo: " << next(num) << endl;
    } else if(op == 2) {
        char c;
        cout << "Digite um caracter: ";
        cin >> c;
        cout << "Valor consecutivo: " << next(c) << endl;
    } else {
        cout << "Opção inválida.\n";
    }

    return 0;
}