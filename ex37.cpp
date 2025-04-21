#include <iostream>
#include <cctype>

using namespace std;

int main() {
    long int populacaoA = 0;
    long int populacaoB = 0;
    int anos = 0;
    char op = ' ';
    double taxaA = 0;
    double taxaB = 0;

    while(true) {
        cout << "---------------------\nDIGITE QUALQUER LETRA PARA SAIR\n---------------------\n";

        cout << "INFORME A POPULACAO DA PRIMEIRA CIDADE: ";
        cin >> populacaoA;
        cout << "INFORME A TAXA DE CRESCIMENTO EM %: ";
        cin >> taxaA;
        
        cout << "INFORME A POPULACAO DA SEGUNDA CIDADE: ";
        cin >> populacaoB;
        cout << "INFORME A TAXA DE CRESCIMENTO EM %: ";
        cin >> taxaB;

        if(populacaoA < populacaoB) {
            while(populacaoA < populacaoB) {
                populacaoA *= (1 + taxaA/100);
                populacaoB *= (1 + taxaB/100);
                anos++;
            }
            cout << "Foram necessarios " << anos << " anos para a populacao A ultrapassar a populacao B.";
        } else if(populacaoA > populacaoB) {
            while(populacaoA > populacaoB) {
                populacaoA *= (1 + taxaA/100);
                populacaoB *= (1 + taxaB/100);
                anos++;
            }
            cout << "Foram necessarios " << anos << " anos para a populacao B ultrapassar a populacao A.";
        }

        cout << "\n=> DESEJA CONTINUAR? ";
        cin >> op;

        if(isalpha(op)) break;
        else continue;

    }

    return 0;
}