#include <iostream>

using namespace std;

void linha();

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int num = 0;

    linha();
    cout << "Números primos.\n";
    linha();

    while(true) {
        cout << "Informe um número: ";
        cin >> num;

        if(num >= 2) {
            break;
        } 
    }

    linha();

    cout << "Números primos até " << num << ":\n";
    for(int i = 2; i <= num; i++) {
        bool primo = true;
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                primo = false;
                break;
            }
        }
        if(primo) {
            cout << i << " ";
        }
    }

    return 0;
}

void linha() {
    cout << "----------------------------------" << endl;
}