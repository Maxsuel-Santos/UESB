/*
(35) Faça um programa que leia e valide as seguintes informações: 
• Nome: maior que 3 caracteres; 
• Idade: entre 0 e 150; 
• Salário: maior que zero; 
• Estado Civil: 's', 'c', 'v', 'd', 'u';
*/

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    string nome = "";
    int idade = 0;
    float salario = 0;
    char estadoCivil, op;

    while(true) {
        cout << "Informe seu nome: "; cin >> nome;
        if(nome.length() < 3) {
            cout << "Informe algo válido.\n";
            continue;
        }

        cout << "Informe sua idade: "; cin >> idade;
        if(idade < 0 || idade > 150) {
            cout << "Informe algo válido.\n";
            continue;
        }

        cout << "Informe seu salário: "; cin >> salario;
        if(salario < 0) {
            cout << "Informe algo válido.";
            continue;
        }

        cout << "Informe seu estado civil: "; cin >> estadoCivil;
        

        cout << "Deseja continuar? "; cin >> op;

        if(op == 'n') break;
    }

    cout << "NOME: " << nome << "\nIDADE: " << idade << "\nSALÁRIO: " << salario << "ESTADO CIVIL: " << estadoCivil << endl;

    return 0;
}
