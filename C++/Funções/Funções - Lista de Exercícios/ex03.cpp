#include <iostream>

using namespace std;

int paridade(unsigned int num);

int main() {
    // O unsigend não permite calores negativo (sem sinal). Logo, sem os valores negativos, o valor máximo da variável int será maior apenas com os positivos doque com os positivos e negativos juntos.
    unsigned int num;

    cout << "Digite um valor inteiro não nulo: ";
    cin >> num;

    cout << paridade(num);

    return 0;
}

int paridade(unsigned int num) {
    if(num % 2 == 0)
        return 1;
    else 
        return 0;
}