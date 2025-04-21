#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float salario = 0, novoSalario = 0, quantAumentada = 0;
    int aumento = 0;

    cout << fixed << setprecision(2);

    cout << "Informe seu salario: R$ ";
    cin >> salario;

    if (salario <= 1280) {
        aumento = 20;
        novoSalario = salario * 1.20;
    } else if (salario <= 1700) {
        aumento = 15;
        novoSalario = salario * 1.15;
    } else if (salario <= 2500) {
        aumento = 10;
        novoSalario = salario * 1.10;
    } else {
        aumento = 5;
        novoSalario = salario * 1.05;
    }

    quantAumentada = novoSalario - salario;

    cout << "\nSALARIO ANTES DO REAJUSTE: \033[1;31mR$ " << salario << "\033[0m";
    cout << "\nPERCENTUAL DE AUMENTO: \033[1;35m" << aumento << "%\033[0m";
    cout << "\nVALOR AUMENTADO: \033[1;33mR$ " << quantAumentada << "\033[0m";
    cout << "\nNOVO SALARIO: \033[1;32mR$ " << novoSalario << "\033[0m" << "\n";

    return 0;
}
