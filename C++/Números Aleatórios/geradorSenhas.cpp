#include <iostream>
#include <string>
#include <random>
#include <algorithm>

std::string gerarSenha(int tamanho = 12, bool usar_maiusculas = true, 
                      bool usar_minusculas = true, bool usar_numeros = true,
                      bool usar_especiais = true) {
    
    // Conjuntos de caracteres disponíveis
    const std::string maiusculas = "ABCDEFGHJKLMNPQRSTUVWXYZ";
    const std::string minusculas = "abcdefghijkmnpqrstuvwxyz";
    const std::string numeros = "23456789";
    const std::string especiais = "!@#$%&*?";
    
    // Verificar se pelo menos um conjunto está ativo
    if (!usar_maiusculas && !usar_minusculas && !usar_numeros && !usar_especiais) {
        throw std::invalid_argument("Pelo menos um tipo de caractere deve estar ativo");
    }
    
    // Criar o conjunto de caracteres baseado nas opções
    std::string caracteres;
    if (usar_maiusculas) caracteres += maiusculas;
    if (usar_minusculas) caracteres += minusculas;
    if (usar_numeros) caracteres += numeros;
    if (usar_especiais) caracteres += especiais;
    
    // Configurar o gerador aleatório
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, caracteres.size() - 1);
    
    // Gerar a senha
    std::string senha;
    for (int i = 0; i < tamanho; ++i) {
        senha += caracteres[dist(gen)];
    }
    
    return senha;
}

int main() {
    try {
        // Exemplo de uso
        std::cout << "Senha padrão: " << gerarSenha() << std::endl;
        std::cout << "Senha forte: " << gerarSenha(16, true, true, true, true) << std::endl;
        std::cout << "Senha numérica: " << gerarSenha(8, false, false, true, false) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    
    return 0;
}