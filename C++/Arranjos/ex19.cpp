#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int max = 20;
    int i = 0, j = 0;
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

    // Impressão
    for(int a = 0; a < i; a++) { // Linhas
        for(int b = 0; b < j; b++) { // Colunas
            cout << setw(8) << matriz[a][b];
        }
        cout << endl;
    }

    return 0;
}