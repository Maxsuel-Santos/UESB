#include <iostream>

using namespace std;

int main() {
    unsigned int valores[10], c[5] = {0};
    int a[5], b[5];
    int tam = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < 10; i++) {
        cout << " Valor " << i+1 << ": ";
        cin >> valores[i];
    }

    for(int j = 0; j < tam; j++) {
        a[j] = valores[j];
        b[j] = valores[j + tam];
    }

    for(int x = 0; x < tam; x++) {
        if(a[x] == b[x])
            c[x] = a[x];
    }

    for(int z : a) {cout << "[" << z << "] ";}
    cout << endl;
    for(int z : b) {cout << "[" << z << "] ";}
    cout << endl;
    for(int z : c) {cout << "[" << z << "] ";}

    return 0;
}