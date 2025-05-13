#include <iostream>

using namespace std;

int razao(double numerador, double denominador, double &resultado);

int main() {
    double a, b, c;

    cout << "Digite o numerador: ";
    cin >> a;

    cout << "Digite o denominador: ";
    cin >> b;

    if(razao(a, b, c)) {
        cout << "Resultado da divisão: " << c << endl;
    } else {
        cout << "Erro: A divisão por zero é indeterminada!" << endl;
    }

    return 0;
}

int razao(double numerador, double denominador, double &resultado) {
    if(denominador == 0) {
        return 0;
    } else {
        resultado = numerador / denominador;
        return 1;
    }
}