#include <iostream>

using namespace std;

int contaDigitos(int n, int d);
int permutacao(int a, int b);

int main() {
    int n = 0, d = 0;

    cout << "Digite um numero n: ";
    cin >> n;
    cout << "Digite um digito d: ";
    cin >> d;

    int quant = contaDigitos(n, d);
    cout << "O numero " << d << " apareceu " << quant << " vezes." << endl;

    if(permutacao(n, d)) {
        cout << "Sao permutacoes.";
    } else {
        cout << "Nao sao permutacoes.";
    }

    return 0;
}

int contaDigitos(int n, int d) {
    int cont = 0;
    
    if(0 < d && d < n) {
        while(n > 0) {
            int digito = n % 10;
            if(digito == d) {
                cont++;
            }        
            n = (int) n / 10;
        } 
    }
    return cont;
}

int permutacao(int a, int b) {
    for(int d = 1; d <= 9; d++) {
        if(contaDigitos(a, d) != contaDigitos(b, d)) {
            return false;
        }
    }
    return true;
}