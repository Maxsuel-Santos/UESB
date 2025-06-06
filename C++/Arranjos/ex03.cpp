#include <iostream>

using namespace std;

int main() {
    int v1[5] = {0}, v2[5] = {0};
    int tamanho = sizeof(v1) / sizeof(v1[0]);

    for(int i = 0; i < tamanho; i++) {
        cout << "Valor " << i+1 << ": ";
        cin >> v1[i];
        v2[i] = v1[i];
    }

    cout << "\033[1;32m";

    for(int i : v1) {
        cout << "[" << i << "], ";
    }

    cout << endl << endl;

    for(int i : v2) {
        cout << "[" << i << "], ";
    }
    return 0;
}