#include <iostream>

using namespace std;

int main() {
    unsigned int valores[10] = {0}, c[10];
    int a[5], b[5];
    int tamMaior = sizeof(valores) / sizeof(valores[0]);
    int tamMenor = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < tamMaior; i++) {
        cout << " Valor " << i+1 << ": ";
        cin >> valores[i];
    }

    for(int j = 0; j < tamMenor; j++) {
        a[j] = valores[j];
        b[j] = valores[j + tamMenor];
    }

    for(int k = 0; k < tamMenor; k++) {
        c[k] = a[k];
        c[k + tamMenor] = b[k];
    }

    for(int z : a) {cout << "[" << z << "] ";}
    cout << endl;
    for(int z : b) {cout << "[" << z << "] ";}
    cout << endl;
    for(int z : c) {cout << "[" << z << "] ";}

    return 0;
}