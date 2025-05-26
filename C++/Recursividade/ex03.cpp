#include <iostream>

using namespace std;

int imprimirDecrescente(int num);

int main() {
    int num = 0;

    cout << "Digite um valor: ";
    cin >> num;

    imprimirDecrescente(num);

    return 0;
}

int imprimirDecrescente(int num) {
    if(num == 0) {
        return 0;
    } else {
        cout << num << ", ";
        return imprimirDecrescente(num - 1);
    }
}