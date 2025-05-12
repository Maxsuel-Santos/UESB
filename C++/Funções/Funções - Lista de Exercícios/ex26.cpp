#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int geradorAleatorio();

int main() {
    srand(time(0)); // Semente para números aleatórios

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
