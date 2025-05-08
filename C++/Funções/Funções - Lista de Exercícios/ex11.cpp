#include <iostream>

using namespace std;

int pnz(int num);

int main() {
    int num = 0;

    cout << "Digite um valor: ";
    cin >> num;
    
    int result = pnz(num);

    if(result == -1) 
        cout << "Valor negativo";
    else if(result == 1)
        cout << "Valor positivo";
    else 
        cout << "Valor zero";
        
    return 0;
}

int pnz(int num) {
    if(num < 0) 
        return -1;
    else if(num > 0)
        return 1;
    else 
        return 0;    
}