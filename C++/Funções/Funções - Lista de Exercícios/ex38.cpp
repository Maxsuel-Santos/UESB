#include <iostream>
using namespace std;

// (a) Soma de dois valores inteiros
int soma(int a, int b) {
    return a + b;
}

// (b) Soma de um inteiro e um float
float soma(int a, float b) {
    return a + b;
}

// (c) Soma de três inteiros
int soma(int a, int b, int c) {
    return a + b + c;
}

int main() {
    // Testando a função (a)
    int x = 5, y = 10;
    cout << "Soma de dois inteiros: " << soma(x, y) << endl;

    // Testando a função (b)
    int i = 7;
    float f = 3.5f;
    cout << "Soma de inteiro e float: " << soma(i, f) << endl;

    // Testando a função (c)
    int a = 1, b = 2, c = 3;
    cout << "Soma de tres inteiros: " << soma(a, b, c) << endl;

    return 0;
}
