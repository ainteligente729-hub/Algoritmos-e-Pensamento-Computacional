
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
 