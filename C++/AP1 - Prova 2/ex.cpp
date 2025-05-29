#include <iostream>

using namespace std;

int area(int lado);
int area(int largura, int comprimento);

int main() {
    int lado = 5, largura = 16, comprimento = 2;

    cout << "Area do quadrado: " << area(lado) << endl;
    cout << "Area do retangulo: " << area(largura, comprimento) << endl;

    return 0;
}

int area(int lado) {
    return lado * lado;
}

int area(int largura, int comprimento) {
    return largura * comprimento;
}