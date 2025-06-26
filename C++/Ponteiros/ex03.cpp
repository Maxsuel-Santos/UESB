#include <iostream>

using namespace std;

void troca(int*, int*);

int main() {
    int a, b = 0;

    cout << endl << "Digite os valores: ";
    cin >> a >> b;

    cout << "VALORES ANTES: " << a << " " << b << endl;
    
    troca(&a, &b);
    
    cout << "VALORES DEPOIS: " << a << " " << b << endl << endl;

    if(a > b) {
        cout << "Os valores não foram permutados, pois o primeiro valor é maior do que o segundo." << endl << endl;
    }

    return 0;
}

void troca(int* x, int* y) {
    if(*x < *y) {
        int troca = 0;
        troca = *x;
        *x = *y;
        *y = troca; 
    }
}
