#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int dado6 = rand() % 6 + 1;
    int dado20 = rand() % 20 + 1;

    int soma = dado6 + dado20;

    int palpite = 0, diferenca = 0;

    cout << "Tente adivinhar o numero selecionado." << endl;
    
    while(true) {
        cout << "Seu palpite: ";
        cin >> palpite;

        diferenca = abs(soma - palpite); // Valor abosuto (módulo)

        if(palpite > 26 || palpite < 1) {
            cout << "\033[1;31m" << "Apenas valores de 1 a 26" << "\033[m" << endl;
            continue;
        } else if(diferenca == 0) {
            cout << "\033[1;32m" << "Você adivinhou!" << "\033[m" << endl;
            break;
        } else if(diferenca <= 2) {
            cout << "\033[1;31m" << "Muito Quente!" << "\033[m" << endl;
        } else if(diferenca <= 5) {
            cout << "\033[1;33m" << "Quente!" << "\033[m" << endl;
        } else if(diferenca <= 10) {
            cout << "\033[1;34m" << "Frio!" << "\033[m" << endl;
        } else {
            cout << "\033[1;36m" << "Muito Frio!" << "\033[m" << endl;
        }
    }

    return 0;
}