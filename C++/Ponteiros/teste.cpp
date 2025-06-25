#include <iostream>

using namespace std;

int main() {
    int var = 10;
    int *ptr = &var; // ponteiros são passados por referência. O endereço de memória de 'var' está em ptr

    cout << "Conteudo de var: " << var; // valor de 'var' => 10
    cout << endl;
    cout << "Endereco de var: " <<  &var; // endereco de 'var' => ex: 0x62ff08
    cout << endl;
    cout << "Conteudo apontado por ptr: " << *ptr; // exibe o valor da variável 'var' que foi passada por referência
    cout << endl;
    cout << "Endereco apontado por ptr: " << ptr; // exibe o endereço de memória de 'var' que foi passada por referência

    // OBS: Conteúdo é diferente de endereço: 
    // CONTEÚDO: É o valor, seja ele numérico, booleano ou alfabético, que está em uma variável;
    // ENDEREÇO: É um 'código' que nos diz o local em que o conteúdo da variável está armazenada na memória ram.
    return 0;
}