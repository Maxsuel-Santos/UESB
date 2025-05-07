#include <iostream>

using namespace std;

int jogo(int horaInicio, int minutosInicio, int horaFim, int minutosFim);

int main() {
    int horaInicio = 0, horaFim = 0, minutosInicio = 0, minutosFim = 0;

    cout << "Digite a hora e os minutos de início: "; cin >> horaInicio >> minutosInicio;
    cout << "Digite a hora e os minutos de término: "; cin >> horaFim >> minutosFim;

    int duracao = jogo(horaInicio, minutosInicio, horaFim, minutosFim);
    cout << "Duracao do jogo: " << duracao << " minutos." << endl;

    return 0;
}

int jogo(int horaInicio, int minutosInicio, int horaFim, int minutosFim) {
    int inicioMin = horaInicio * 60 + minutosInicio;
    int fimMin = horaFim * 60 + minutosFim;

    if(fimMin >= inicioMin) {
        return fimMin - inicioMin;
    } else {
        return (1440 - inicioMin) + fimMin;
    }
}