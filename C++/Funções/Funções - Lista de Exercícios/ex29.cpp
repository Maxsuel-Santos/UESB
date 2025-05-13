#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char jogo();
int numero_computador();
void placar(char vencedor);

int main() {
    srand(time(0));

    char jogar_novamente;

    do {
        char vencedor = jogo();
        placar(vencedor);

        cout << "Mais uma rodada (S/N)? ";
        cin >> jogar_novamente;

    } while(jogar_novamente == 's' || jogar_novamente == 'S');

    return 0;
}

int numero_computador() {
    return rand() % 11; // 0 a 10
}

void placar(char vencedor) {
    static int pontos_jogador = 0;
    static int pontos_computador = 0;

    if(vencedor == 'j' || vencedor == 'J') {
        pontos_jogador++;
    } else if(vencedor == 'c' || vencedor == 'C') {
        pontos_computador++;
    }

    cout << "============ PLACAR ============\n";
    cout << "Você: " << pontos_jogador << "        Computador: " << pontos_computador << endl;
    cout << "================================\n";
}

char jogo() {
    int escolha = 0, jogador = 0, computador = 0;
    string escolha_paridade; 

     cout << "\nPar ou ímpar?\n0 para par\n1 para ímpar\n";
     cin >> escolha;

    while(escolha != 0 && escolha != 1) {
        cout << "Escolha inválida! Digite 0 para par ou 1 para ímpar: ";
        cin >> escolha;
    }

    (escolha == 0) ? escolha_paridade = "PAR" : escolha_paridade = "IMPAR";

    cout << "Digite a sua jogada (0 a 10): ";
    cin >> jogador;

    while(jogador < 0 || jogador > 10) {
        cout << "Número inválido! Digite um valor entre 0 e 10: ";
        cin >> jogador;
    }

    computador = numero_computador();

    cout << "--------------------------------\n";
    cout << "Sua escolha: " << escolha_paridade << endl;
    cout << "Sua jogada: " << jogador << endl;
    cout << "Jogada do computador: " << computador << endl;

    int soma = jogador + computador; // Somar se é ímpar ou par o valor do jogador + computador
    bool resultado_impar = soma % 2; // V ou F se é impar a soma dos valores
    char vencedor;

    if(resultado_impar == escolha) {
        cout << "Vencedor da rodada: você\n";
        vencedor = 'j';
    } else {
        cout << "Vencedor da rodada: computador\n";
        vencedor = 'c';
    }

    return vencedor;

}