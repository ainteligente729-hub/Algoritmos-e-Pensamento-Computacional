
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
 