#include <iostream>

using namespace std;
template <typename T>
void ordenacao(T a, T b, T c) {
    if(a <= b && b <= c) // abc
        cout << a << ", " << b << ", " << c;
    else if(a <= c && c <= b) // acb
        cout << a << ", " << c << ", " << b;
    else if(b <= a && a <= c) // bac
        cout << b << ", " << a << ", " << c;
    else if(b <= c && c <= a) // bca
        cout << b << ", " << c << ", " << a;
    else if(c <= a && a <= b) // cab 
        cout << c << ", " << a << ", " << b; 
    else if(c <= a && b <= a) // cba
        cout << c << ", " << b << ", " << a;
}

/*
// Outra forma

template <typename T>
void ordenacao(T a, T b, T c) {
    // Troca os valores manualmente
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << "Ordem crescente: " << a << ", " << b << ", " << c << endl;
}
*/

int main() {
    int n1, n2, n3;
    char c1, c2, c3;

    cout << "3 inteiros em sequencia: ";
    cin >> n1 >> n2 >> n3;    
    ordenacao(n1,n2,n3);
    
    cout << "\n3 char em sequencia: ";
    cin >> c1 >> c2 >> c3;
    ordenacao(c1,c2,c3);


    return 0;
}