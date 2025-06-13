//programa q imprime uma arvore binaria

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct no{
    int numero;
    struct no *esquerda;
    struct no *direita;
};

struct no *inserir(struct no *raiz, int numero){
     //caso facil: arvore vazia
     if (raiz == NULL){
           raiz = (struct no *)malloc(sizeof(struct no));
           raiz->numero = numero;
           raiz->esquerda = NULL;
           raiz->direita = NULL;
           return raiz;
     }
    //caso dificil: arvore não vazia
     int sorteio = (rand() % 2);
     if (sorteio){
           raiz -> esquerda = inserir(raiz -> esquerda, numero);
     }else{
           raiz->direita = inserir(raiz->direita, numero);
     }
     return raiz;
}

//funcao que navega a arvore em pre-ordem (Raiz, Esquerda, Direita)

void navegarPreOrdem(struct no *raiz){
  if (raiz == NULL){
    return;
    }
    printf("%d ", raiz->numero);
    navegarPreOrdem(raiz->esquerda);
    navegarPreOrdem(raiz->direita);
}

//funcao que navega a arvore em ordem (Esquerda, Raiz, Direita)
void navegarEmOrdem(struct no *raiz){
  if (raiz == NULL){
    return;
    }
    navegarEmOrdem(raiz->esquerda);
    printf("%d ", raiz->numero);
    navegarEmOrdem(raiz->direita);
}

//funcao que navega a arvore em pós-ordem (Esquerda, Raiz, Direita)
void navegarPosOrdem(struct no *raiz){
  if (raiz == NULL){
    return;
    }
    navegarPosOrdem(raiz->esquerda);
    navegarPosOrdem(raiz->direita);
    printf("%d ", raiz->numero);
}


int main(){
    //Declaracao arvore
    struct no *arvore = NULL;
    int i;

    //Inicializacao da aleatoriedade
    time_t t;
    srand(time(&t));

    //Criacao da arvore
    for (int i = 0; i < 10; i++){
        arvore = inserir(arvore, i);
    }

    printf("\nPre ordem :\n");
    navegarPreOrdem(arvore);

    printf("\nEm ordem :\n");
    navegarEmOrdem(arvore);

    printf("\nPos ordem :\n");
    navegarPosOrdem(arvore);

    return 0;
}