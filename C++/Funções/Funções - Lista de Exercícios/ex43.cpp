#include <iostream>

using namespace std;

template <typename T>
T produto(T n1, T n2) {
    return n1 * n2;
}

int main() {
    int a = 0, b = 0;
    double x = 0, y = 0;
    
    cout << "Digite dois numeros inteiros em sequencia: ";
    cin >> a >> b;
    
    cout << "Digite dois numeros reais em sequencia: ";
    cin >> x >> y;

    cout << "Produto dos dois inteiros é igual a: " << produto(a, b) << endl;
    cout << "Produto dos dois reais é igual a: " << produto(x, y) << endl;

    return 0;
}