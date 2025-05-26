#include <iostream>

using namespace std;

long int fatorial(int num);

int main() {
    int num = 0;

    cout << "Digite um valor para ver seu fatorial: ";
    cin >> num;

    cout << "Fatorial de " << num << " e: " << fatorial(num);

    return 0;
}

long int fatorial(int num) {
    if(num == 1)
        return 1;
    else    
        return num * fatorial(num - 1);
}
