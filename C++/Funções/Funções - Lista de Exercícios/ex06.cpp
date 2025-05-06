#include <iostream>
#include <cmath>

using namespace std;

float raizQuadrada(float num);

int main() {
    float numero;
    cout << "Digite um número positivo: ";
    cin >> numero;

    float resultado = raizQuadrada(numero);
    cout << "Raiz quadrada aproximada: " << resultado << endl;

    // Comparação com sqrt (opcional)
    cout << "Raiz quadrada com sqrt: " << sqrt(numero) << endl;

    return 0;
}

float raizQuadrada(float num) {
    if(num < 0) {
        cout << "Numero negativo não possui raiz quadrada no conjunto dos numeros Reais.";
        return -1;
    }

    float r = num / 2;
    float erroMax = 0.0001f; // 0.01%
    float erroRelativo = 0;

    do {
        float r2 = r * r;
        erroRelativo = fabs((r2 - num) / num);
        r = (r + num / r) / 2;
    } while(erroRelativo > erroMax);

    return r;
}