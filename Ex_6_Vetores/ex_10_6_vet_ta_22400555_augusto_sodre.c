#include <stdio.h>
#include <string.h>

void main(){
    char palavraOriginal[52], palavraInvertida[52];

    printf("Dê-me uma palavra:\n");
    scanf("%s", &palavraOriginal);

    int length = strlen(palavraOriginal);
    int indexPalavraOriginal = length - 1;

    for (int i = 0; i < length; i++){
        palavraInvertida[i] = palavraOriginal[indexPalavraOriginal];
        indexPalavraOriginal--;
    }
    palavraInvertida[length] = '\0';

    printf("\n");
    for (int i = 0; i < length; i++){
        printf("%c", palavraInvertida[i]);
    }
    printf("\n");
}
