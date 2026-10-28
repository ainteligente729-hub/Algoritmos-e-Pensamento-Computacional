### Controle de Estoque: Bubble Sort e Quick Sort

Disciplina: Algoritmos e Pensamento Computacional Autora: Ana Beatriz

## Situação-problema

Uma loja precisa saber quais produtos estão com o menor estoque para repor primeiro, antes que faltem. Olhando uma lista desorganizada, é difícil enxergar isso. Ordenando os produtos pela quantidade em estoque, o item mais urgente aparece no topo da lista.

## Objetivo da aplicação

Ordenar 10 produtos pela quantidade em estoque, em ordem crescente (do menor para o maior), usando dois algoritmos, Bubble Sort e Quick Sort, aplicados aos mesmos dados. O programa mostra a lista antes da ordenação e o resultado de cada algoritmo.

## Como funcionam os algoritmos
### Bubble Sort

Compara pares de elementos vizinhos e troca os dois quando estão fora de ordem. Isso se repete em várias passadas pelo array. A cada passada, o maior valor restante "sobe" até o final, como uma bolha, e por isso cada passada precisa olhar um elemento a menos.

* É simples de entender e de acompanhar passo a passo.  
* No pior caso faz cerca de n² comparações, então fica lento com muitos dados.  
  
### Quick Sort

Usa a estratégia de dividir para conquistar:

1. Escolhe um pivô (neste projeto, o último elemento do trecho)
2. Separa os elementos: os menores ou iguais ao pivô vão para a esquerda e os maiores ficam à direita. O pivô é colocado entre os dois grupos, já na sua posição final.
3. Repete o processo, de forma recursiva, para o lado esquerdo e para o lado direito, até sobrarem trechos com 0 ou 1 elemento.

## Como compilar e executar

Com o GCC, dentro da pasta do projeto:

gcc main.c -o estoque
./estoque

No Windows (PowerShell), execute com .\estoque.exe.

Também é possível usar o OnlineGDB: crie o arquivo main.c, cole o código e clique em Run.

### Exemplo de saída
=== CONTROLE DE ESTOQUE ===  
Criterio de ordenacao: CRESCENTE (menor estoque primeiro)

--- ANTES DA ORDENACAO ---
 1. Arroz 5kg              45 unidades
 2. Feijao 1kg            120 unidades
 3. Macarrao 500g         210 unidades
 ...
10. Farinha de Trigo        9 unidades

--- DEPOIS - BUBBLE SORT ---
 1. Farinha de Trigo        9 unidades
 2. Cafe 500g              18 unidades
 3. Sabao em Po 1kg        26 unidades
 ...
10. Leite Integral 1L     260 unidades

--- DEPOIS - QUICK SORT ---
 (mesma ordem do Bubble Sort)

Produto para repor primeiro: Farinha de Trigo (9 unidades)

## Estrutura do código
|Parte	       |  Função                          
|:---          | :---
|trocar()      |   troca dois produtos de lugar (nome e quantidade juntos)
|bubbleSort()  |   ordenação comparando vizinhos
|quickSort()   |   ordenação por divisão e conquista, com recursão
|exibir()      |   mostra a lista no terminal

Os dados ficam em dois arrays paralelos: nomes[] e qtd[]. A posição i representa o mesmo produto nos dois.

## Tecnologias e ferramentas
Linguagem C e compilador GCC
Git e GitHub
Visual Studio Code
