#include <iostream>
#include <ctime> // Para time()

using namespace std;

// Nosso próprio gerador pseudoaleatório simples
class SimpleRandom {
private:
    unsigned int seed;
    
public:
    SimpleRandom(unsigned int s = 0) : seed(s) {
        if (seed == 0) {
            seed = time(nullptr); // Usa o tempo atual como semente
        }
    }
    
    // Algoritmo LCG simples
    int next() {
        seed = (1664525 * seed + 1013904223) % 4294967296;
        return seed;
    }
    
    // Número entre min e max (inclusive)
    int next(int min, int max) {
        return min + (next() % (max - min + 1));
    }
};

int main() {
    SimpleRandom rng;
    
    cout << "10 números aleatórios entre 1 e 100:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << rng.next(1, 100) << " ";
    }
    cout << endl;
    
    return 0;
}