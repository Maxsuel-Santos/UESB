#include <iostream>
#include <string>

using namespace std;

int contarVogais(string texto);

int main() {
    string texto;

    cout << "Diigite um texto/palavra: ";
    getline(cin, texto);

    cout << "Quantidade de vogais: " << contarVogais(texto);

    return 0;
}

int contarVogais(string texto) {
    int cont = 0;
    for(char c : texto) {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
        }
    }
    return cont;
}