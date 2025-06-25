#include <iostream>

using namespace std;

int main() {
    int var = 10;
    int *ptr = &var; // ponteiros são passados por referência. O endereço de memória de 'var' está em ptr

    cout << var; // valor de 'var' => 10
    cout << endl;
    cout << &var; // endereco de 'var' => ex: 0x62ff08
    cout << endl;
    cout << *ptr; // exibe o valor da variável 'var' que foi passada por referência
    cout << endl;
    cout << ptr; // exibe o endereço de memória de 'var' que foi passada por referência

    return 0;
}