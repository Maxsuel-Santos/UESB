#include <iostream>

using namespace std;

int fatorial(int num);

int main() {
    int valor = 0;

    cout << "Digite um valor: ";
    cin >> valor;

    cout << "!" << valor << " = " << fatorial((int)valor);

    return 0;
}

int fatorial(int num) {
    if(num <= 1) return 1;
    return num * fatorial(num - 1);
}