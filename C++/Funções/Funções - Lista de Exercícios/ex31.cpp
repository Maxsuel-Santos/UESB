#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

enum cartas {
    as = 1, dois, tres, quatro, cinco, seis, sete, oito, nove, valete = 10, dama = 10, rei = 10
};

int compra_carta();
void recorde();
void jogo();
//void line();

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    srand(time(0));

    while(true) {
        char resp;
        jogo();

        cout << "Deseja continuar? [S/N]: ";
        cin >> resp;

        if(tolower(resp) != 's')
            break;
    }

    return 0;
}

int compra_carta() {
    int carta = rand() % 13 + 1;

    if(carta >= 11 && carta <= 13) {
        return 10;
    } else {
        return carta;
    }
}

void recorde(int pontuacao) {
    static int recorde = 0;
    if(recorde <= 21) {
        if(pontuacao > recorde) {
            recorde = pontuacao;
            cout << "\033[1;32m" << "Você bateu o recorde!" << "\033[m";
        } else {
            cout << "\033[1;31m" << "Você não bateu o recorde!" << "\033[m" << endl;
        }
    }
    
    cout << "\033[1;36m" << "Pontuação da rodada: " << pontuacao << "\nRecorde: " << recorde << "\033[m" << endl;
}

void jogo() {
    int cartas_iniciais[3] = {0};
    int soma = 0;

    for(int i = 0; i < 3; i++) {
        cartas_iniciais[i] = compra_carta();
    }

    for(int i = 0; i < 3; i++) {
        soma += cartas_iniciais[i];
    }

    cout << "Números das cartas sorteadas: " << endl;
    for(int i = 0; i < 3; i++) {
        cout << cartas_iniciais[i] << endl;
    }

    cout << "\033[1;33m" << "Pontuação final: " << soma << "\033[m" << endl;

    if(soma > 21)
        cout << "\033[1;31m" << "VOCÊ PERDEU!" << "\033[m" << endl;
    else if(soma == 21)
        cout << "\033[1;32m" << "VOCÊ VENCEU!" << "\033[m" << endl;
    else {
        while(true) {
            char continuar;
            cout << "Você ainda não alcançou 21 pontos. \nDeseja comprar mais uma carta? [S/N]: ";
            cin >> continuar;

            if(tolower(continuar) == 's') {
                int nova_carta = compra_carta();
                cout << "Valor da carta comprada: " << nova_carta << endl;
                soma += nova_carta;
                cout << "Sua pontuação: " << soma << endl;

                if(soma > 21) {
                    cout << "\033[1;31m" << "VOCÊ PERDEU!" << "\033[m" << endl;
                    soma = 0;
                    break;
                } else if(soma == 21) {
                    cout << "\033[1;32m" << "VOCÊ VENCEU!" << "\033[m" << endl;
                    break;
                }
                else {
                    continue;
                }

            } else {
                cout << "Sua pontuação: " << soma << endl;
                break;
            }
        }
    }

    recorde(soma);
}