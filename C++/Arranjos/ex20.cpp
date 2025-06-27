#include <iostream>
#include <iomanip>

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

    // Matriz A personalizada
    double A[linhas][colunas] = {0};

    // Inserção dos valores
    cout << "Digite os valores da matriz: " << endl;
    for(unsigned int i = 0; i < linhas; i++) {
        for(unsigned int j = 0; j < colunas; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Impressão da matriz
    for(unsigned int i = 0; i < linhas; i++) {
        for(unsigned int j = 0; j < colunas; j++) {
            cout << setw(8) << A[i][j];
        }
        cout << endl;
    }

    // Matriz B (com uma coluna e linha a mais)
    double B[linhas + 1][colunas + 1] = {0};

    for(unsigned int i = 0; i < linhas; i++) {
        for(unsigned int j = 0; j < colunas; j++) {
            B[i][j] = A[i][j];
        }
    }

    // Soma de linhas
    for(unsigned int i = 0; i < linhas; i++) {
        double somaLinha = 0; // Inicializa e/ou reseta a variável
        for(int j = 0; j < colunas; j++) {
            somaLinha += A[i][j];
        }
        B[i][colunas] = somaLinha;
    }
    
    // Soma de colunas
    for(unsigned int j = 0; j < colunas; j++) {
        double somaColuna = 0; // Inicializa e/ou reseta a variável
        for(unsigned int i = 0; i < linhas; i++) {
            somaColuna += A[i][j];
        }
        B[linhas][j] = somaColuna;
    }

    /*for(unsigned int i = 0; i < linhas; i++) {
        for(unsigned int j = 0; j < colunas; j++) {
            cout << setw(8) << B[i][j];
        }
        cout << endl;
    }*/

    return 0;
}