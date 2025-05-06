#include <iostream>

using namespace std;

bool ehPar(int num);

int main() {
    int num = 0;
    bool result = false;

    cout << "Digite um valor: ";
    cin >> num;

    result = ehPar(num);

    if(result) {
        cout << num << " é par!";
    } else {
        cout << num << " não é par!";
    }

    return 0;
}

bool ehPar(int num) {
    if(num % 2 == 0)
        return true;
    else 
        return false;
}
