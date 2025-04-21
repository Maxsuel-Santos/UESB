#include <iostream>

using namespace std;

int main() {
    int populacaoA = 80000, populacaoB = 200000, anos = 0;

    while(populacaoA < populacaoB) {
        populacaoA *= 1.03;
        populacaoB *= 1.015;
        anos++;
    }

    cout << "Foram necessarios " << anos << " anos para a populacao A ultrapassar a populacao B.";

    return 0;
}