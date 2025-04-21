#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    float altura;
    char genero;

    cout << "Informe sua altura (m): ";
    cin >> altura;

    cout << "Informe seu gênero (M/F): ";
    cin >> genero;

    float result = (genero == 'h' || genero == 'H') 
    ? (72.7 * altura - 58) 
    : (62.1 * altura - 44.7);
    
    cout << fixed << setprecision(2);
    cout << "Peso ideal: " << result;
    return 0;
}