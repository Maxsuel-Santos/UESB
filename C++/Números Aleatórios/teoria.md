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