#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese-Brazil");

    int idade = 0, totalIdades = 0, pessoas = 0, media = 0;

    while(true) {
        cout << "Informe a idade da pessoa: ";
        cin >> idade;

        if(idade < 0) {
            break;
        }

        totalIdades += idade;
        pessoas++;
    }

    media = totalIdades / pessoas;

    if(media >= 0 && media <=25) {
        cout << "A turma é jovem.";
    } else if (media <= 60) {
        cout << "A turma é adulta.";
    } else {
        cout << "A turma é idosa.";
    }

    cout << "Média das idades: " << media;

    return 0;
}