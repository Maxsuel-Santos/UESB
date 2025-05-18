#include <iostream>
#include <locale.h>

using namespace std;

// Molde genérico de tipos primitivos
template <typename tipo>
tipo media(tipo a, tipo b, tipo c) {
    return (a + b + c) / 3;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float f1, f2, f3;
    int i1, i2, i3;

    cout << "Digite 3 números float: ";
    cin >> f1 >> f2 >> f3;

    cout << "Digite 3 números int: ";
    cin >> i1 >> i2 >> i3;

    cout << "Média dos inteiros: " << media(i1, i2, i3) << endl;
    cout << "Média dos float: " << media(f1, f2, f3) << endl;

    return 0;
}
