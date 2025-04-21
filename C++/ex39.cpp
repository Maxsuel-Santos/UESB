#include <iostream>

using namespace std;

int main() {
    int num, maior;

    cout << "Digite um numero: ";
    cin >> maior;

    for(int i = 0; i < 4; i++) {
        cout << "Digite outro numero: ";
        cin >> num;

        if(num > maior) {
            maior = num;
        }
    }

    cout << "O maior valor foi o numero " << maior;

    return 0;
}