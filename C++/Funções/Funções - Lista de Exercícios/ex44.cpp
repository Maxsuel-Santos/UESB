#include <iostream>
//#include <cmath>

using namespace std;

float volume(float a);
float volume(float l, float c, float h);
float volume(float r, float h);

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao = 0;

    cout << "\nEscolha qual volume calcular:\n[1] Cubo\n[2] Paralelepípedo\n[3] Cilindro\nSua escolha: ";
    cin >> opcao;

    if(opcao == 1) {
        int a = 0;
        cout << "Informe a aresta: "; 
        cin >> a;
        cout << "Volume do cubo: " << volume(a);
    } else if(opcao == 2) {
        int l, c, h;
        cout << "Informe a largura, comprimento e altura em sequência: ";
        cin >> l >> c >> h;
        cout << "Volume do paralelepípedo: " << volume(l, c, h);
    } else if(opcao == 3) {
        int r, h;
        cout << "Informe o raio e altura em sequência: ";
        cin >> r >> h;
        cout << "Volume do cilindro: " << volume(r, h);
    } else {
        cout << "Opção inválida!";
    }


    return 0;
}

float volume(float a) {
    return a * a * a;
    //return pow(a, 3);
}

float volume(float l, float c, float h) {
    return l * c * h;
}

float volume(float r, float h) {
    return (3.141592 * (r * r)) * h;
    //return M_PI * r * r * h;
}