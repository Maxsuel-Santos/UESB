#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double precoProduto = 1.99;

    cout << fixed << setprecision(2);

    for(int i = 1; i <= 50; i++) {
        cout << i << " - R$ " << precoProduto * i << endl;
    }

    return 0;
}