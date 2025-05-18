#include <iostream>

using namespace std;

template <typename T>
void permuta(T& x, T& y) {
    T troca;
    troca = x;
    x = y;
    y = troca;
} 

int main() {
    int i1, i2;
    double i3, i4;
    char i5, i6;

    cout << "Digite 2 valores inteiros: ";
    cin >> i1 >> i2;

    cout << "Digite 2 valores reais: ";
    cin >> i3 >> i4;

    cout << "Digite 2 valores char: ";
    cin >> i5 >> i6;

    cout << endl << "----- Valores Antes -----" << endl;
    cout << "i1: " << i1 << "\ni2: " << i2 << "\ni3: " << i3 << "\ni4: " << i4 << "\ni5: " << i5 << "\ni6: " << i6;

    permuta(i1, i2);
    permuta(i3, i4);
    permuta(i5, i6);

    cout << endl << "----- Valores Depois -----" << endl;
    cout << "i1: " << i1 << "\ni2: " << i2 << "\ni3: " << i3 << "\ni4: " << i4 << "\ni5: " << i5 << "\ni6: " << i6;
    return 0;
}
