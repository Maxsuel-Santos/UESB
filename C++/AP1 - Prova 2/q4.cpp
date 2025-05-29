#include <iostream>

using namespace std;

template <typename T>
void maiorMenor(T a, T b, T c) {
    if(a < b && b < c)
        cout << "Do Menor ao Maior: " << a << " " << b << " " << c << endl;
    if(a < c && c < b)
        cout << "Do Menor ao Maior: " << a << " " << c << " " << b << endl;
    if(b < a && a < c)
        cout << "Do Menor ao Maior: " << b << " " << a << " " << c << endl;
    if(b < c && c < a)
        cout << "Do Menor ao Maior: " << b << " " << c << " " << a << endl;
    if(c < a && a < b)
        cout << "Do Menor ao Maior: " << c << " " << a << " " << b << endl;
    if(c < b && b < a)
        cout << "Do Menor ao Maior: " << c << " " << b << " " << a << endl;
}

int main() {
    int a = 2, b = 1, c = 61;
    float m = 23, n = 56.2, o = 17.3;
    char x = 'a', y = 'h', z = 'd';

    maiorMenor(a,b,c);
    maiorMenor(m,n,o);
    maiorMenor(x,y,z);
}