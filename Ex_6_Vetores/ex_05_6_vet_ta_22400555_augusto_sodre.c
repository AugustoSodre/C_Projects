#include <stdio.h>
#include <string.h>

void main(){
    int vet1[10];
    int vet2[10];
    int vet3[10];

    for (int i = 0; i < 10; i++){
        printf("\nDigite um número para o vetor 1: ");
        scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < 10; i++){
        printf("\nDigite um número para o vetor 2: ");
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < 10; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    printf("\nVetor da soma posicional:\n");
    printf("[")
    for (int i = 0; i < 10; i++){
        printf(" %d ", vet3[i]);
    }
    printf("]");

}
