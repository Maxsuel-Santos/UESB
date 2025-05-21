#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum cartas {
    as = 1, dois, tres, quatro, cinco, seis, sete, oito, nove, valete = 10, dama = 10, rei = 10
};

int compra_carta();
int recorde(int num);
void jogo();

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

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

int recorde(int num) {

}

void jogo() {

}