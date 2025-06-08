#include <iostream>

using namespace std;

int main() {
    int v1[5] = {0}, v2[5] = {0};
    int tamanho = sizeof(v1) / sizeof(v1[0]);
    int pos = 0;

    cout << "\033[1;32m";
    
    for(int i = 0; i < tamanho; i++) {
        cout << "Valor " << i+1 << ": ";
        cin >> v1[i];
    }

    for(int i = tamanho - 1; i >= 0; i--) { // for(int i = 0; i < tamanho; i++)
        v2[i] = v1[pos]; // v2[i] = v1[tamanho - 1 - i];
        pos++;
    }    

    for(int j : v1) {
        cout << "[" << j << "], ";
    }

    cout << endl;

    for(int k : v2) {
        cout << "[" << k << "], ";
    }

    return 0;
}