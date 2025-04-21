#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float preco = 0;

    cout << fixed << setprecision(2);

    while(true) {
        cout << "Preço do pão: ";
        cin >> preco;
        
        if(preco > 0) {
            break;
        } else {
            cout << "\033[1;31mInforme um valor válido.\033[0m\n";
            continue;
        }
    }

    cout << "\033[1;33m----- Panificadora Pão de Ontem - Tabela de Preços -----\033[0m]";

    for(int i = 1; i <= 50; i++) {
        cout << "\n\033[1;34m" << i << " - R$ " << preco * i << "\033[0m";
    }

    return 0;
}