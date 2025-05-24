#include <iostream>
#include <string>

using namespace std;

double area(double a);
double area(double b, double h, char tipo);

int main() {
    double a, b, h;
    char op;

    cout << "\n[Q] Quadrado\n[R] Retângulo\n[T] Triângulo\nSua escolha: ";
    cin >> op;

    if(tolower(op) == 'q') {
        cout << "Informe o lado: ";
        cin >> a;
        cout << "Área: " << area(a);
    } else if(tolower(op) == 'r') {
        cout << "Informe a base e altura: ";
        cin >> b >> h;
        cout << "Área: " << area(b, h, op);
    } else if(tolower(op) == 't') {
        cout << "Informe a base e altura: ";
        cin >> b >> h;
        cout << "Área: " << area(b, h, op);
    } else {
        cout << "\033[1;31m" << "DADOS INVÁLIDOS!" << "\033[m";
    }

    return 0;
}

double area(double a) {
    return a * a;
}

double area(double b, double h, char tipo) {
    if(tipo == 'r') {
        return b * h;
    } else {
        return (b * h) / 2;
    }
}