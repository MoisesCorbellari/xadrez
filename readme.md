# ♟️ Desafio: Movimentação das Peças de Xadrez em C
## 🎯 Objetivo
- Simular os movimentos básicos das peças de xadrez: Torre, Bispo, Rainha e Cavalo, utilizando estruturas de repetição como **for** e **switch-case** para opções de movimento do cavalo.
- A movimentação é exibida de forma textual no console, demonstrando o deslocamento casa a casa.

### ♜ Movimentação das Peças
#### Torre 
- Direção: para a direita
- Quantidade: definida pelo usuário

#### Bispo
- Direção: Cima - Direita (Diagonal)
- Quantidade: definida pelo usuário

#### Rainha
- Direção: Esquerda
- Quantidade: definida pelo usuário

#### Cavalo
- Movimento em ‘L’
- Direção: escolhida pelo usuário (1 a 8)

🧠 Estrutura usada: for com switch-case

💻 Exemplo de Saída
```plaintext
====== Movimento da Torre ======
Quantas casas à direita? 5
Movimento da Torre, 5 casas à direita:
1ª casa à *direita*
2ª casa à *direita*
3ª casa à *direita*
4ª casa à *direita*
5ª casa à *direita*

====== Movimento da rainha ======
Quantas casas? 8
Movimento da Rainha, 8 casas à esquerda:
1ª casa à *esquerda*
2ª casa à *esquerda*
3ª casa à *esquerda*
4ª casa à *esquerda*
5ª casa à *esquerda*
6ª casa à *esquerda*
7ª casa à *esquerda*
8ª casa à *esquerda*

====== Movimento do bispo - Diagonal ======
Quantas casas? 5
Movimento do Bispo, 5 casas na diagonal (Cima - Direita):
1ª casa: Cima - Direita (Diagonal)
2ª casa: Cima - Direita (Diagonal)
3ª casa: Cima - Direita (Diagonal)
4ª casa: Cima - Direita (Diagonal)
5ª casa: Cima - Direita (Diagonal)

====== Movimento do cavalo - em'L' ======
Escolha a direção do movimento do cavalo:
1 - cima-direita
2 - cima-esquerda
3 - baixo-direita
4 - baixo-esquerda
5 - direita-cima
6 - direita-baixo
7 - esquerda-cima
8 - esquerda-baixo

Digite o número da direção desejada: 1

Opção 1: 2 para cima, 1 para direita
```