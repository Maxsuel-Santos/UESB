/*
(44) Desenvolva um gerador de tabuada, capaz de gerar a tabuada de multiplicar de qualquer número 
inteiro de 1 a 10. O usuário deve informar de qual número ele deseja ver a tabuada. A saída deve 
ser conforme o exemplo abaixo: 
Tabuada de 5: 
5 X 1 = 5 
5 X 2 = 10 
... 
5 X 10 = 50
*/

#include <iostream>

using namespace std;

int main() {
    int num = 0;

    while(true) {
        cout << "Informe um número (entre 1 e 10) para ver sua tabuada: "; 
        cin >> num;

        if(num < 1 || num >10) {
            cout << "\nInforme um valor válido.\n";
            continue;
        } else {
            break;
        }
    }
    
    cout << "-------------------------------\n";

    for(int c = 0; c <= 10; c++) {
        cout << num << " x " << c << " = " << num*c << "\n";
    }

    cout << "-------------------------------\n";

    return 0;
}
