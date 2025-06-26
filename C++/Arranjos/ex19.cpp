#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int max = 20;
    int i = 0, j = 0, linha = 0, coluna = 0, soma = 0, multiplicacao = 1;
    double matriz[max][max];

    cout << "INFORME A QUANTIDADE DE LINHAS: ";
    cin >> i;
    cout << "INFORME A QUANTIDADE DE COLUNAS: ";
    cin >> j;
    
    cout << "DIGITE OS VALORES MATRIZ: " << endl;
    for(int a = 0; a < i; a++) { // Linhas
        for(int b = 0; b < j; b++) { // Colunas
            cout << "A[" << a << "][" << b << "] = ";
            cin >> matriz[a][b];
        }
    }

    cout << "DIGITE A LINHA A TER OS VALORES SOMADOS (0 a " << i - 1 << "): ";
    cin >> linha;

    cout << "DIGITE A COLUNA A TER OS VALORES MULTIPLICADOS (0 a " << j - 1 << "): ";
    cin >> coluna;

    // Impressão
    for(int a = 0; a < i; a++) { // Linhas
        for(int b = 0; b < j; b++) { // Colunas
            cout << setw(8) << matriz[a][b];
        }
        cout << endl;
    }

    // Soma
    if(linha >= 0 && linha < i) {
        for(int h = 0; h < j; h++) {
            soma += matriz[linha][h];
        }
        cout << "Soma da linha " << linha << ": " << soma << endl;
    } else {
        cout << "VALOR INVALIDO!" << endl;
    }
    
    // Multiplicação
    if(coluna >= 0 && coluna < j) {
        for(int g = 0; g < i; g++) {
            multiplicacao *= matriz[g][coluna];
        }
        cout << "Multiplicacao da coluna " << coluna << ": " << multiplicacao << endl;
    } else {
        cout << "VALOR INVALIDO!" << endl;
    }

    return 0;
}