#include <iostream>

using namespace std;

int main() {
    char turno = ' ';

    cout << "Em qual turno voce estuda? ";
    cin >> turno;

    switch(turno) {
        case 'M':
        case 'm':
            cout << "Bom dia!";
            break;
        case 'V':
        case 'v':
            cout << "Boa tarde!";
            break;
        case 'N':
        case 'n':
            cout << "Boa noite!";
            break;
        default:
            cout << "Valor invalido!";
            break;

    }

    return 0;
}