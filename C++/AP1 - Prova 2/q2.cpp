#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rolarDadoD20();

int main() {
    srand(time(0));

    int dadoValor = rolarDadoD20();
    int palpite = 0;
    int diferenca = 0;

    cout << "******** Tente adivinhar o valor do dado de 1 a 20 ********" << endl;

    while(true) {
        cout << "Palpite: ";
        cin >> palpite;

        if(palpite > 20 || palpite < 1) {
            cout << "\033[1;31m" << "Valor invalido!" << "\033[m" << endl;
            continue;
        }

        diferenca = abs(palpite - dadoValor);

        if(diferenca <= 2) {
            cout << "\033[1;33m" << "Quente" << "\033[m" << endl;
        } else if(diferenca <= 4) {
            cout << "\033[1;35m" << "Morno" << "\033[m" << endl;
        } else {
            cout << "\033[1;34m" << "Frio" << "\033[m" << endl;
        }

        if(palpite == dadoValor) {
            cout << "\033[1;32m" << "VOCE ACERTOU (:" << "\033[m" << endl;
            break;
        }    
    }
    return 0;
}

int rolarDadoD20() {
    return rand() % 20 + 1;
}