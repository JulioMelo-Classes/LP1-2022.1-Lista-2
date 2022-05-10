# Bingo (de Palavras)!

O jogo de bingo consiste num globo contendo um conjunto de bolas numeradas de 1 à 99, sorteadas uma a uma. Os jogadores recebem uma quantidade de números
fixa em uma "Cartela" e devem marcar os números que foram sorteados. O jogo termina quando um jogador completa uma cartela inteira.

Nesta questão você fará um simulador simples de bingo, o simulador deve receber do usuário incialmente o _seed_ do jogo(um número _long_) e a quantidade e os nomes dos jogadores. O Simulador deve então imprimir as cartelas de cada jogador com **24 números diferentes** cada, e realizar a simulação do jogo: 

1. A cada rodada um número número/bola é sorteada
2. A simulação deve primir quais jogadores marcaram alguma coisa em sua cartela (na ordem que foram fornecidos ao jogo no inicio)
3. O simulador repete 1 e 2 até até que algum jogador(es) termine o jogo completando sua cartela, neste caso o simulador imprime o(s) vencedor(es).

O _seed_ do jogo é um conceito chave nesta questão, junto com a função srand o seed fornece um conjunto de números aleatórios "previsíveis", ou seja
se você usar o mesmo gerador de números aleatórios que eu usarei na solução, os números sorteados no jogo serão os mesmos! Para garantir que vocês usarão
os mesmos conjuntos de números aleatórios que eu, usem os métodos do BingoRand.hpp para configurar o seed e toda vez que um número aleatório for necessário!

Mais uma vez, nesta atividade você deverá tentar usar classes e objetos para modelar o problema, veja que o problema se resume a praticamente 4 passos:

1. Configurar a seed, os jogadores e suas cartelas
2. Realizar o sorteio e verificar os numeros marcados pelos jogadores
3. Se ninguém venceu: Imprimir o sorteio atual e quais jogadores marcaram alguma coisa
4. Se alguém venceu: Imprimir o(s) vencedor(es)

Mais uma vez use a lógica com base nas entradas e saídas bem como na descrição do problema para escolher quais classes e métodos você vai implementar, veja que as entradas e saídas que vocÊ vai obter não devem ser diferentes das que são testadas aqui! No entanto, dependendo da implementação pode ser que os números sejam 
um pouco diferentes. Apenas tenha certeza de que você está com a seed correta e que está usando os métodos da classe BingoRand!

## Executando os testes

Nesta questão para executar os testes você precisa fazer os seguintes comandos, no terminal, a partir do diretório onde este README está:

```
mkdir build
cd build
cmake ..
cmake --build . --target verify
```

Ou caso queira rodar seus próprios testes:

```
mkdir build
cd build
cmake ..
cmake --build . --target program
```