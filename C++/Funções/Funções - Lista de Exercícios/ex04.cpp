#include <iostream>

using namespace std;

bool paridade(unsigned int num);

int main() {
    unsigned int num;

    cout << "Digite um valor inteiro não nulo: ";
    cin >> num;

    // Operador ternário -> condição ? se verdadeiro : se falso;
    paridade(num) ? cout << "True" : cout << "False";

    return 0;
}

bool paridade(unsigned int num) {
    if(num % 5 == 0)
        return true;
    else 
        return false;
}