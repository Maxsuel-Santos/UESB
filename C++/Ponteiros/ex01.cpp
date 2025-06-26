#include <iostream>

using namespace std;

int main() {
    int valor1 = 10, *ponteiro1 = &valor1;
    float valor2 = 7.5, *ponteiro2 = &valor2;

    cout << endl << "===== VALORES E ENDERECOS DAS VARIAVEIS =====" << endl;
    cout << "[" << valor1 << "], [" << valor2 << "].\n"; // Conteúdo das variáveis
    cout << "[" << &valor1 << "], [" << &valor2 << "].\n"; // Endereço das variáveis

    cout << endl << "===== VALORES E ENDERECOS DOS PONTEIRO =====" << endl;
    cout << "[" << *ponteiro1 << "], [" << *ponteiro2 << "].\n"; // Conteúdo dos ponteiros
    cout << "[" << &ponteiro1 << "], [" << &ponteiro2 << "].\n\n"; // Endereço dos ponteiros

    return 0;
}

/*
RESPOSTA DA PERGUNTA DA QUESTÃO:
- Os valores de 'valor1' e '*ponteiro1' são iguais pois, ambos possuem o mesmo conteúdo (10), pelo fato do *ponteiro1 estar apontando para o endereço de memória de valor1 e, consequentemente, 'pegando' o valor da variável e armazenando em si.
*/