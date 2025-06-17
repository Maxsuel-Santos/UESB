#include <iostream>

using namespace std;

int main() {
    unsigned int valores[10] = {0}, a[5] = {0}, b[5] = {0};
    int tamMaior = sizeof(valores) / sizeof(valores[0]);
    int tamMenor = sizeof(a) / sizeof(a[0]);
    int c[5] = {0};
    //int cont = 0;

    for(int i = 0; i < tamMaior; i++) {
        cout << i+1 << "º VALOR: ";
        cin >> valores[i];
    }

    /*for(int j = 0; j < tamMenor; j++) {
        a[j] = valores[j];
    }

    for(int k = tamMenor; k < tamMaior; k++) {
        b[cont] = valores[k];
        cont++;
    }*/

    // Forma mais eficiente com apenas uma estrutura de repetição
    for(int i = 0; i < tamMenor; ++i) {
        a[i] = valores[i];
        b[i] = valores[tamMenor + i];  
    }

    for(int i = 0; i < tamMenor; i++) {
        if(a[i] > b[i])
            c[i] = 1;
        else if(a[i] == b[i])
            c[i] = 0;
        else 
            c[i] = -1;
    }

    for(int i : a) {
        cout << i << " ";
    }

    cout << endl;
    
    for(int o : b) {
        cout << o << " ";
    }

    cout << endl;
    
    for(int v : c) {
        cout << v << " ";
    }

    return 0;
}