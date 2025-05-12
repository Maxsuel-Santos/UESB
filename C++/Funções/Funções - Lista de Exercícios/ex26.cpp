#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int geradorAleatorio();

int main() {
    srand(time(0)); // Semente para números aleatórios (0 a RAND_MAX)

    int recorde = 0;
    char jogarNovamente;

    do {
        int numero = geradorAleatorio();
        int tentativa, palpites = 0;

        cout << "\n=== JOGO DE ADIVINHAÇÃO ===\n";
        cout << "Tente adivinhar o número sorteado entre [1, 50]!\n";

        do{
            cout << "Seu palpite: ";
            cin >> tentativa;

            palpites++;

            if(tentativa < numero) {
                cout << "Chutou BAIXO!\n";
            } else if(tentativa > numero) {
                cout << "Chutou ALTO!\n";
            } else {
                cout << "Acertou! Número correto: " << numero << "\n";
            }
        } while(tentativa != numero);

        cout << "Você acertou em \033[1;34m" << palpites << "\033[m Tetativas.";

        if(recorde == 0 || palpites < recorde) {
            recorde = palpites;
            cout << "Novo recorde de menor número de tentativas!";
        } else {
            cout << "Recorde atual: " << recorde << " tentativa(s).\n";
        }

        cout << "Deseja continuar? [S/N] ";
        cin >> jogarNovamente;

    } while(jogarNovamente == 'S' || jogarNovamente == 's');

    cout << "END GAME!";

    return 0;
}

int geradorAleatorio() {
    return rand() % 50 + 1; // 1 a 50
}

// rand() gera um número inteiro aleatório entre 0 e RAND_MAX.
// % 50 limita o valor para 0 a 49.
// +1 desloca para 1 a 50.

/*
A fórmula geral para gerar números aleatórios em um intervalo [a, b] é:

rand() % (b - a + 1) + a

Exemplo para intervalo [126, 652]:
int numero = rand() % (652 - 126 + 1) + 126; // rand() % 527 + 126

Portanto, para mudar o intervalo na função gerador(), basta escrever:
int gerador() {
    return rand() % 527 + 126;  // Gera entre 126 e 652
}
*/