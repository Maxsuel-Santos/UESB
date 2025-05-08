#include <iostream>

using namespace std;

int contaDigitos(int n, int d);

int main() {
    int n = 0, d = 0;

    cout << "Digite um numero n: ";
    cin >> n;
    cout << "Digite um digito d: ";
    cin >> d;

    int quant = contaDigitos(n, d);
    cout << "O numero " << d << " apareceu " << quant << " vezes.";

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
    } else {
        return cont;
    }

    return cont;
}