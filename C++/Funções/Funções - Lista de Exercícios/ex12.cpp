#include <iostream>
#include <cctype>

using namespace std;

long double media(float x1, float x2, float x3, char letra);

int main() {
    float x1 = 0, x2 = 2, x3 = 0;
    char letra;

    cout << "Digite X1: "; cin >> x1;
    cout << "Digite X2: "; cin >> x2;
    cout << "Digite X3: "; cin >> x3;
    
    cout << "\n[ P ] Media Ponderada\n[ H ] Media Harmonica\n[ A ] Media Aritmetica\nSua escolha: ";
    cin >> letra;

    long double valor = media(x1, x2, x3, letra); 

    if(valor == 0)
        cout << "\033[31m\nDados inválidos.\033[m";
    else 
        cout << "Valor da media solicitada: " << valor;

    return 0;
}

long double media(float x1, float x2, float x3, char letra) {
    long double valorFinal = 0;
    if(tolower(letra) == 'p') {
        // Média ponderada (pesos: 5, 3 e 2)
        valorFinal = ((x1*5) + (x2*3) + (x3*2)) / (5 + 3 + 2);
    } else if(tolower(letra) == 'h') {
        // Média harmônica
        if(x1 == 0 || x2 == 0 || x3 == 0) return 0;
        valorFinal = 3 / ((1/x1) + (1/x2) + (1/x3));
    } else if(tolower(letra) == 'a') {
        // Média aritmética
        valorFinal = (x1 + x2 + x3) / 3;
    } else {
        valorFinal = 0;
    }

    return valorFinal;
}
