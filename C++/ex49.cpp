#include <iostream>

using namespace std;

int main() {
    int num;
    long int fatorial = 1;

    cout << "Type a number to see its factorial: ";
    cin >> num;

    for(int i = num; i >= 1; i--) {
        fatorial *= i;
    }

    cout << "The factorial of " << num << " is " << fatorial << endl;

    return 0;
}