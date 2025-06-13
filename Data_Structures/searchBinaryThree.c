//programa que implementa uma arvore de busca binaria

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaracao da estrutura do no

struct no{
    int numero;
    struct no *esquerda;
    struct no *direita;
};

//funcao que insere um no na arvore

struct no *inserir(struct no *raiz, int numero) {
    //caso facil: arvore vazia
    if(raiz == NULL) {
        raiz = (struct no *) malloc(sizeof(struct no));
        raiz -> numero = numero;
        raiz -> esquerda = NULL;
        raiz -> direita = NULL;
        return raiz;
    }

    //caso dificil: arvore nao vazia
    if(raiz -> numero > numero) {
        raiz -> esquerda = inserir(raiz -> esquerda, numero);
    } else {
        raiz -> direita = inserir(raiz -> direita, numero);
    }
    return raiz;
};

// funcao que procura um no na arvore

void procurar(struct no *raiz, int numero){
    //caso muito facil: arvore vazia
    if(raiz == NULL){
        printf("Numero não encontrado\n");
        return;
    }

    //caso facil: numero procurado esta na raiz
    if(raiz -> numero == numero){
        printf("Parabens!!! achei!!!\n");
        return;
    }

    //caso dificil: numero não está na raiz
    if(raiz -> numero > numero) {
        procurar(raiz -> esquerda, numero);
    } else {
        procurar(raiz -> direita, numero);
    }
}

// funcao que navega arvore em ordem

void navegarEmOrdem(struct no *raiz) {
    if(raiz == NULL) {
        return;
    }

    navegarEmOrdem(raiz -> esquerda);
    printf("%d, ", raiz -> numero);
    navegarEmOrdem(raiz -> direita);
}

//funcao principal de execucao do programa

int main(){
    //declaracao de variaveis
    struct no *arvore = NULL;
    int i = 0;
    int numero;

    //inicializacao da aleatoriedade
    time_t t;
    srand(time(&t));

    //construcao da arvore
    for(i = 0; i < 200000 ; i++) {
        arvore = inserir(arvore,rand() % 100);
    }

    //navegacao da arvore
    navegarEmOrdem(arvore);
    printf("\n");


    //procura de nos
    while (1) {
        printf("Digite um numero:");
        scanf("%d", &numero);
        procurar(arvore, numero);
    }
}