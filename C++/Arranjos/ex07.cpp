#include <iostream>

using namespace std;

int main() {
    int A[5] = {0}, B[5];
    int tam = sizeof(A) / sizeof(A[0]);

    for(int i = 0; i < tam; i++) {
        cout << "Digite o valor " << i+1 << ": ";
        cin >> A[i];
        B[i] = A[i] * i;
    }

    for(int i : A) {
        cout << "[" << i << "], ";
    }
    cout << endl;
    for(int i : B) {
        cout << "[" << i << "], ";
    }

    return 0;
}