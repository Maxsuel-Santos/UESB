#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float precoProduto = 0, total = 0, dinheiro = 0, troco = 0;
    int cont = 1;

    cout << fixed << setprecision(2);

    while(true) {
        cout << "================= LOJAS TABAJARA =================";
        cout << "\n";

        while(true) {
            cout << "\033[1;33mProduto " << cont << ": R$ \033[0m";
            cin >> precoProduto;
            total += precoProduto;
            cont++;

            if(precoProduto == 0) {
                break;
            } else if(precoProduto < 0) {
                cout << "\033[1;31mInforme uma valor valido!\033[0m";
                cont--;
                total -= precoProduto;
                continue;
            }
        }

        cout << "\033[1;35mTotal a Pagar: R$ " << total << "\033[0m" << endl;

        while(true) {
            cout << "\033[1;32mDinheiro: R$ \033[0m";
            cin >> dinheiro;

            if(dinheiro >= total) {
                break;
            } else {
                cout << "\033[1;31mValor insuficiente.\033[0m\n";
                continue;
            }
        }

        troco = dinheiro - total;

        cout << "\033[1;34mTroco: R$ " << troco << "\033[0m" << endl;

        // Resetar as variáveis.
        precoProduto = 0;
        dinheiro = 0;
        total = 0;
        troco = 0;
        cont = 1;

        }
    return 0;
}
