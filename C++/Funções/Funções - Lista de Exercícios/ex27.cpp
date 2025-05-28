#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int cara_coroa();
void lancamentos(int valor);

int main() {
    srand(time(0));

    int quant = 0;

    cout << "Digite a quantidade de vezes para serem jogados a moeda: ";
    cin >> quant;

    lancamentos(quant);

    return 0;
}

int cara_coroa() {
    int jogada = rand() % 2 + 1;
    return jogada;
}

void lancamentos(int valor) {
    int cara = 0, coroa = 0;
    
    for(int i = 0; i < valor; i++) {
        int jogada = cara_coroa();
        if(jogada == 1)
            cara++;
        else
            coroa++;
    }

    cout << "Ao todo, foram " << valor << " lançamentos." << endl;
    cout << cara << " vezes deu cara. " << (float) ((cara * 100.0) / valor) << "%." << endl;
    cout << coroa << " vezes deu cara. " << (float) ((coroa * 100.0) / valor) << "%." << endl;
}
