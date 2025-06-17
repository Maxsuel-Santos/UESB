#include <iostream>

using namespace std;

int main() {
    int a[5] = {0};
    int tam = sizeof(a) / sizeof(a[0]);

    for(int j = 0; j < tam; j++) {
        cout << j+1 << "º VALOR: ";
        cin >> a[j];
    }

    // Verificação
    for(int z = 0; z < tam; z++) {
        if(a[z] % 2 != 0) {
            cout << "Falso";
            return 0; 
        }
    }

    cout << "Verdadeiro";

    return 0;
}