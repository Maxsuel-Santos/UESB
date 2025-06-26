#include <iostream>

using namespace std;

void troca(int*, int*);

int main() {
    int a, b = 0;

    cout << "Digite os valores: ";
    cin >> a >> b;

    cout << "VALORES ANTES: " << a << " " << b << endl;
    
    troca(&a, &b);
    
    cout << "VALORES DEPOIS: " << a << " " << b << endl;

    return 0;
}

void troca(int* v1, int* v2) {
    int troca = 0;
    troca = *v1;
    *v1 = *v2;
    *v2 = troca; 
}
