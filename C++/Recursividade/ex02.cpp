#include <iostream>
#include <string>

using namespace std;

void inverterString(string s);

int main() {
    string texto;

    cout << "Digite uma palavra ou frase: ";
    getline(cin, texto);

    cout << "Invertido: ";
    inverterString(texto);

    return 0;
}

void inverterString(string s) {
    if(s.empty()) return; // caso base: string vazia
    cout << s.back(); // imprime o último caractere
    s.pop_back(); // remove o último caractere
    inverterString(s); // chamada recursiva para o restante
}
