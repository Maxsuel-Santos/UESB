#include <iostream>

using namespace std;

int quadrado(int num);

int main() {
    int num = 0;

    cout << "Digite um valor: ";
    cin >> num;

    cout << "O quadado de " << num << " e " << quadrado(num);
    return 0;
}

int quadrado(int num) {
    return num * num;
}