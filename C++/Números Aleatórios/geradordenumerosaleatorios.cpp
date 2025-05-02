#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime> // time()
using namespace std;

int main() {
    int minimo, maximo, quantidade;

    // Entrada do usuário
    cout << "Digite o valor mínimo do intervalo: ";
    cin >> minimo;

    cout << "Digite o valor máximo do intervalo: ";
    cin >> maximo;

    // Verificação básica
    if (minimo > maximo) {
        cout << "Intervalo inválido! O mínimo deve ser menor ou igual ao máximo." << endl;
        return 1;
    }

    cout << "Quantos números aleatórios deseja gerar? ";
    cin >> quantidade;

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(0));

    cout << "\nNúmeros gerados:\n";
    for (int i = 0; i < quantidade; i++) {
        int aleatorio = rand() % (maximo - minimo + 1) + minimo;
        cout << aleatorio << " ";
    }

    cout << endl;
    return 0;
}
