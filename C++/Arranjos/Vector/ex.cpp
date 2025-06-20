#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros; // vetor vazio de inteiros
    vector<int> notas(5); // vetor com 5 elementos (inicializados com 0)
    vector<int> pares = {2, 4, 6, 8}; // inicialização com valores

    // Inserção e remoção de elementos
    numeros.push_back(10); // adiciona 10 ao final
    numeros.push_back(20);
    numeros.pop_back(); // remove o último elemento

    // Acessar elementos
    cout << numeros[0];       // acesso direto (sem verificação)
    cout << numeros.at(0);    // acesso com verificação de limites
    cout << numeros.front();  // primeiro elemento
    cout << numeros.back();   // último elemento

    // Tamanho e capacidade
    numeros.size();      // número de elementos
    numeros.capacity();  // capacidade alocada internamente
    numeros.empty();     // retorna true se estiver vazio

    // Iteração com for
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }

    for (int x : numeros) {
        cout << x << " ";
    }

    // Outras operações úteis
    numeros.clear();       // remove todos os elementos
    numeros.resize(10);    // altera o tamanho (corta ou adiciona elementos)
    numeros.insert(numeros.begin(), 5);  // insere 5 no início
    numeros.erase(numeros.begin() + 1);  // remove o segundo elemento

    // Ordenação (com <algorithm>)
    sort(numeros.begin(), numeros.end()); // crescente
    reverse(numeros.begin(), numeros.end()); // inverte

    // Buscar elemento
    #include <algorithm>
    if (find(numeros.begin(), numeros.end(), 20) != numeros.end()) {
        cout << "20 encontrado!";
    }

    
}

// Passar vetor para funções
void imprimir(const vector<int>& v) {
    for (int x : v) cout << x << " ";
}
