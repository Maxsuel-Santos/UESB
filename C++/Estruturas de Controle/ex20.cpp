#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n1 = 0, n2 = 0, n3 = 0;
    double menor = 0, maior = 0;

    cout << "Informe 3 números um seguido do outro: ";
    cin >> n1 >> n2 >> n3;

    if((n1 > n2) && (n1 > n3)) {
        maior = n1;
    } else if((n2 > n1) && (n2 > n3)) {
        maior = n2;
    } else {
        maior = n3;
    }
    
    if((n1 < n2) && (n1 < n3)) {
        menor = n1;
    } else if((n2 < n1) && (n2 < n3)) {
        menor = n2;
    } else {
        menor = n3;
    }
    

    cout << "MENOR VALOR: " << menor << endl;
    cout << "MAIOR VALOR: " << maior << endl;

    return 0;
}