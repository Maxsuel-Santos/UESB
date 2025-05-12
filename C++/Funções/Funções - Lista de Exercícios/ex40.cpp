#include <iostream>

using namespace std;

int media(int n1, int n2, int n3, int n4);
float media(float n1, float n2, float n3);
double media(double n1, double n2);

int main() {
    int op = 0;
    
    cout << "Escolha a média que deseja calcular:\n";
    cout << "[1] Média de 4 inteiros\n";
    cout << "[2] Média de 3 floats\n";
    cout << "[3] Média de 2 doubles\n";
    cout << "Sua opção: ";
    cin >> op;

    if(op == 1) {
        int n1, n2, n3, n4;
        cout << "Digite 4 numeros inteiros seguidos: ";
        cin >> n1 >> n2 >> n3 >> n4;
        cout << "Media: " << media(n1, n2, n3, n4) << endl;
    } else if(op == 2) {
        int n1, n2, n3;
        cout << "Digite 3 numeros float seguidos: ";
        cin >> n1 >> n2 >> n3;
        cout << "Media: " << media(n1, n2, n3) << endl;
    } else if(op == 3) {
        int n1, n2;
        cout << "Digite 2 numeros double seguidos: ";
        cin >> n1 >> n2;
        cout << "Media: " << media(n1, n2) << endl;
    } else {
        cout << "Opção inválida.\n";
    }
}

int media(int n1, int n2, int n3, int n4) {
    return (n1 + n2 + n3 + n4) / 4; 
}

float media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

double media(double n1, double n2) {
    return (n1 + n2) / 2;
}