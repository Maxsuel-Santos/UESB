#include <iostream>
#include <random>  // Bibliotecas para números aleatórios
#include <chrono>  // Para high_resolution_clock

using namespace std;

int main() {
    // 1. Criar um gerador de números aleatórios
    // Usa o tempo atual como semente para maior aleatoriedade
    unsigned seed = chrono::high_resolution_clock::now()
                    .time_since_epoch().count();
    mt19937 generator(seed); // Mersenne Twister (bom gerador)
    
    // 2. Definir a distribuição desejada
    uniform_int_distribution<int> distribution(1, 100);
    
    cout << "10 números aleatórios entre 1 e 100 (com biblioteca):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << distribution(generator) << " ";
    }
    cout << endl;
    
    // Exemplo com números reais entre 0.0 e 1.0
    uniform_real_distribution<double> real_dist(0.0, 1.0);
    cout << "\n5 números reais entre 0.0 e 1.0:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << real_dist(generator) << " ";
    }
    cout << endl;
    
    // Exemplo com distribuição normal (Gaussiana)
    normal_distribution<double> normal_dist(0.0, 1.0); // média=0, desvio=1
    cout << "\n5 números com distribuição normal:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << normal_dist(generator) << " ";
    }
    cout << endl;
    
    return 0;
}