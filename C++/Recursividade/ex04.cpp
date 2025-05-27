#include <iostream>

using namespace std;

long long int soma(int valor);

int main() {
    int num = 0;

    cout << "Digite um valor: ";
    cin >> num;

    for(int i = 0; i <= num; i++) {
        cout << i;
        if(i < num)
            cout << " + ";
    }

    cout << " = " << soma(num) << endl;

    return 0;
}

long long int soma(int valor) {
    if(valor == 0)
        return 0;
    else    
        return valor + soma(valor - 1);
}
