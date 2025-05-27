#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float area(float largura, float altura);
float area(float lado);

int main() {
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(3);

    float lado, largura, altura;
    char escolha;

    cout << "Cálculo de área de figuras:\n[R] Retângulo\n[Q] Quadrado\nSua escolha: ";
    cin >> escolha;

    if(tolower(escolha) == 'r') {
        cout << "Informe a largura e altura respectivamente: ";
        cin >> largura >> altura;
        
        cout << "Área do retângulo: " << area(largura, altura);
    } else if(tolower(escolha) == 'q') {
        cout << "Informe o lado: ";
        cin >> lado;
        
        cout << "Área do quadrado: " << area(lado);
    } else {
        cout << "\033[1;31m" << "Valor inválido!" << "\033[m";
    }

    return 0;
}

float area(float largura, float altura) {
    return largura * altura;
}

float area(float lado) {
    return lado * lado;
}