#include <iostream>

using namespace std;

int soma(int n1, int n2);
int subtracao(int n1, int n2);

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1 = 0, n2 = 0, op = 0;

    while(true) {
        cout << "\n[ 1 ] - SOMAR\n[ 2 ] - SUBTRAIR\nSua escolha: ";
        cin >> op;
        if(op == 1 || op == 2) break;
    }

    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;

    if(op == 1) {
        cout << n1 << " + " << n2 << " = " << soma(n1, n2);
    } else {
        cout << n1 << " - " << n2 << " = " << subtracao(n1, n2);
    }

    return 0;
}

int soma(int n1, int n2) {
    return n1 + n2;
}

int subtracao(int n1, int n2) {
    return n1 - n2;
}