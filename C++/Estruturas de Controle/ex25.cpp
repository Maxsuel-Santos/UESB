#include <iostream>
#include <locale>    
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); 

    float valorHora, valorBruto, salarioLiquido;
    float inss = 0, ir = 0, fgts = 0;
    int quantHorasTra, irDescont = 0;

    cout << "Informe o valor da hora do funcionário: ";
    cin >> valorHora;

    cout << "Informe a quantidade de horas trabalhadas no mês: ";
    cin >> quantHorasTra;

    valorBruto = valorHora * quantHorasTra;

    if (valorBruto < 2500) {
        irDescont = 0;
        ir = 0;
        inss = 0;
    } else if (valorBruto <= 3500) {
        irDescont = 5;
        ir = valorBruto * 0.05;
        inss = valorBruto * 0.10;
    } else if (valorBruto <= 5500) {
        irDescont = 10;
        ir = valorBruto * 0.10;
        inss = valorBruto * 0.10;
    } else {
        irDescont = 20;
        ir = valorBruto * 0.20;
        inss = valorBruto * 0.10;
    }

    fgts = valorBruto * 0.11;
    salarioLiquido = valorBruto - ir - inss;

    cout << "\nSALÁRIO BRUTO      : R$ " << valorBruto << endl;
    cout << "(-) IR (" << irDescont << "%)         : R$ " << ir << endl;
    cout << "(-) INSS             : R$ " << inss << endl;
    cout << "FGTS (11%)           : R$ " << fgts << endl;
    cout << "TOTAL DE DESCONTOS   : R$ " << (ir + inss) << setprecision(2) << endl;
    cout << "SALÁRIO LÍQUIDO      : R$ " << salarioLiquido << setprecision(2) << endl;

    return 0;
}
