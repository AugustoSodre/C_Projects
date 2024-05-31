#include <stdio.h>
#include <string.h>

void main(){
    int vetor[100];
    //Preenchendo de 1 a 100
    for (int i = 1; i <= 100; i++){
        if (i%2 == 0){
            vetor[i-1] = 1;
        } else {
            vetor[i-1] = 0;
        }
    }

    //Printando
    printf("[");
    for (int i = 0; i < 100; i++){
        printf(" %d ", vetor[i]);
    }
    printf("]");

}
