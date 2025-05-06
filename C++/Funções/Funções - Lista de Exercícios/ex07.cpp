#include <iostream>

using namespace std;

unsigned int inverte(unsigned int num);

int main() {
    unsigned int num = 0;

    cout << "Digite um valor para ver ele invertido: ";
    cin >> num;

    cout << inverte(num);

    return 0;
}

unsigned int inverte(unsigned int num) {
    int invertido = 0;

    while(num != 0) {
        unsigned int digito = num % 10; 
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    return invertido;
}
