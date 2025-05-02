# Por que Computadores Não Geram Números Verdadeiramente Aleatórios?

Os computadores são máquinas determinísticas - isso significa que, dado o mesmo estado inicial e as mesmas entradas, eles sempre produzirão os mesmos resultados. Essa natureza fundamental torna impossível gerar números verdadeiramente aleatórios sem ajuda externa.

## Números Pseudoaleatórios
O que chamamos de "números aleatórios" em programação são na verdade números pseudoaleatórios:

- São gerados por algoritmos matemáticos

- Aparecem como aleatórios para observadores humanos

- São completamente determinísticos (previsíveis se você conhecer o algoritmo e a semente)

- Repetem sequências após um longo período

## Fontes de "Verdadeira" Aleatoriedade
Para obter verdadeira aleatoriedade, precisamos de fontes externas:

-Ruído atmosférico

-Decaimento radioativo

-Movimentos do mouse/teclado do usuário

-Tempo entre batidas de teclas

## Linear Congruential Generator (LCG)

Limitações desta Abordagem:

1. Não é criptograficamente seguro

2. Pode mostrar padrões discerníveis

3. Qualidade da aleatoriedade é limitada

4. Período de repetição pode ser curto

## Geração de Números Aleatórios com Bibliotecas Padrão

C++ oferece recursos melhores na biblioteca <random> (desde C++11):

### Por que usar <random>?

1. Melhor qualidade: Algoritmos como Mersenne Twister têm períodos muito longos (2^19937-1)

2. Várias distribuições: uniforme, normal, binomial, Poisson, etc.

3. Mais flexibilidade: Controle preciso sobre intervalos e características

4. Thread-safe: Mais seguro para programação concorrente

5. Padronizado: Comportamento consistente entre compiladores

## O Antigo rand() e seus Problemas
Antes do C++11, usava-se principalmente rand() e srand()

### Problemas com rand():

1. Qualidade ruim de aleatoriedade

2. Distribuição não uniforme (especialmente com %)

3. Período curto (tipicamente 2^32)

4. Implementação varia entre compiladores

5. Não thread-safe

## Boas Práticas para Números Aleatórios

1. Use <random> para código novo: É a abordagem moderna e superior

2. Escolha o gerador adequado:

    2.1 std::mt19937: Bom para a maioria dos casos

    2.2std::random_device: Para criptografia (pode ser lento)

3. Selecione a distribuição correta:

    3.1 uniform_int_distribution: Inteiros uniformes

    3.2uniform_real_distribution: Reais uniformes

    3.3 normal_distribution: Distribuição normal (Gaussiana)

4. Semeie adequadamente:

    4.1 Para casos não críticos: use o relógio

    4.2 Para segurança: std::random_device

5. Evite rand() % n: Isso distorce a distribuição