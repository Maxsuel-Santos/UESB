#include <iostream>

using namespace std;

long int contagem();

int main() {
    cout << contagem();

    return 0;
}

long int contagem() {
    for(int i = 1; i <= 1000000000; i++)
        cout << i << endl;
}