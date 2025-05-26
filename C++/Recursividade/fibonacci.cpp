#include <iostream>

using namespace std;

long long int fibonacci(int num);

int main() {
    int termos = 0;

    cout << "Digite um valor: ";
    cin >> termos;

    cout << "Sequencia de Fibonacci com " << termos << " termos:" << endl;
    for(int i = 0; i <= termos; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}

long long int fibonacci(int num) {
    if(num == 0)
        return 0;
    else if(num == 1)
        return 1;
    
    return fibonacci(num - 1) + fibonacci(num - 2);
}
