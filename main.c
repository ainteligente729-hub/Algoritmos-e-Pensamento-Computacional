
/*
 * Controle de Estoque - Bubble Sort e Quick Sort
 * Disciplina: Algoritmos e Pensamento Computacional
 * Autora: Ana Beatriz
 *
 * Problema: uma loja precisa saber quais produtos estao com o MENOR estoque
 * para repor primeiro. Por isso, os produtos sao ordenados pela quantidade
 * em estoque, em ordem CRESCENTE (do menor para o maior), usando dois
 * algoritmos: Bubble Sort e Quick Sort.
 */
 
#include <stdio.h>
#include <string.h>
 
#define TAM 10  // quantidade de produtos (minimo exigido: 10)
 
// Troca os produtos das posicoes a e b.
// Os dois arrays sao paralelos (a posicao i e o mesmo produto nos dois),
// entao o nome e a quantidade sempre sao trocados juntos.
void trocar(char nomes[][30], int qtd[], int a, int b) {
    int auxQtd = qtd[a];
    qtd[a] = qtd[b];
    qtd[b] = auxQtd;
 
    char auxNome[30];
    strcpy(auxNome, nomes[a]);
    strcpy(nomes[a], nomes[b]);
    strcpy(nomes[b], auxNome);
}

// BUBBLE SORT: compara elementos vizinhos e troca se estiverem fora de ordem

void bubbleSort(char nomes[][30], int qtd[], int n) {
    // Laco externo: cada passada deixa o maior valor restante no final
    for (int i = 0; i < n - 1; i++) {
        // Laco interno: compara cada elemento com o vizinho da frente
        for (int j = 0; j < n - 1 - i; j++) {
            // Se o da esquerda e maior que o da direita, troca
            if (qtd[j] > qtd[j + 1]) {
                trocar(nomes, qtd, j, j + 1);
            }
        }
    }
}

// QUICK SORT: escolhe um pivo, separa os menores e os maiores que ele,
// e repete o processo para cada lado

void quickSort(char nomes[][30], int qtd[], int inicio, int fim) {
    // Caso base: com 0 ou 1 elemento nao ha nada para ordenar
    if (inicio >= fim) {
        return;
    }
 
    int pivo = qtd[fim];  // o pivo e o ultimo elemento do trecho
    int i = inicio - 1;   // marca ate onde vao os elementos menores que o pivo
 
    // Percorre o trecho: quem for menor ou igual ao pivo vai para a esquerda
    for (int j = inicio; j < fim; j++) {
        if (qtd[j] <= pivo) {
            i++;
            trocar(nomes, qtd, i, j);
        }
    }
 
    // Coloca o pivo na sua posicao final (logo depois dos menores)
    trocar(nomes, qtd, i + 1, fim);
 
    // Ordena o lado esquerdo e o lado direito do pivo
    quickSort(nomes, qtd, inicio, i);
    quickSort(nomes, qtd, i + 2, fim);
}
 
// Mostra a lista de produtos no terminal

void exibir(char nomes[][30], int qtd[], int n, char titulo[]) {
    printf("--- %s ---\n", titulo);
    for (int i = 0; i < n; i++) {
        printf("%2d. %-20s %4d unidades\n", i + 1, nomes[i], qtd[i]);
    }
    printf("\n");
}
 
int main(void) {
    // Dados originais: nome e quantidade em estoque de cada produto
    char nomes[TAM][30] = {
        "Arroz 5kg", "Feijao 1kg", "Macarrao 500g", "Oleo de Soja",
        "Acucar 1kg", "Cafe 500g", "Leite Integral 1L", "Biscoito Recheado",
        "Sabao em Po 1kg", "Farinha de Trigo"
    };
    int qtd[TAM] = {45, 120, 210, 33, 87, 18, 260, 150, 26, 9};
 
    // Copias para que os dois algoritmos ordenem os MESMOS dados

    char nomesBubble[TAM][30], nomesQuick[TAM][30];
    int qtdBubble[TAM], qtdQuick[TAM];
    memcpy(nomesBubble, nomes, sizeof(nomes));
    memcpy(nomesQuick, nomes, sizeof(nomes));
    memcpy(qtdBubble, qtd, sizeof(qtd));
    memcpy(qtdQuick, qtd, sizeof(qtd));
 
    printf("=== CONTROLE DE ESTOQUE ===\n");
    printf("Criterio de ordenacao: CRESCENTE (menor estoque primeiro)\n\n");
 
    exibir(nomes, qtd, TAM, "ANTES DA ORDENACAO");
 
    bubbleSort(nomesBubble, qtdBubble, TAM);
    exibir(nomesBubble, qtdBubble, TAM, "DEPOIS - BUBBLE SORT");
 
    quickSort(nomesQuick, qtdQuick, 0, TAM - 1);
    exibir(nomesQuick, qtdQuick, TAM, "DEPOIS - QUICK SORT");
 
    printf("Produto para repor primeiro: %s (%d unidades)\n", nomesQuick[0], qtdQuick[0]);
 
    return 0;
}
 