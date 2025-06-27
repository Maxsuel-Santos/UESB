#include <iostream>

using namespace std;

int main() {
    unsigned int linhas = 0, colunas = 0;

    // Quant. de linhas
    while(true) {
        cout << "Informe a quantidade de linhas da matriz: ";
        cin >> linhas;

        if(linhas <= 0) {
            cout << "Valor inválido!";
            continue;
        } else {
            break;
        }
    }

    // Quant. de colunas
    while(true) {
        cout << "Informe a quantidade de colunas da matriz: ";
        cin >> colunas;

        if(colunas <= 0) {
            cout << "Valor inválido!";
            continue;
        } else {
            break;
        }
    }

    // Matriz personalizada
    double A[linhas][colunas] = {0};

    // Inserção dos valores
    cout << "Digite os valores da matriz: " << endl;
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Impressão da matriz

    return 0;
}