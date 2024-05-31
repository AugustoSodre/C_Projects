#include <stdio.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int i, lista [4];
    char buffer [40];
    for (i = 0; i < 4; i++){
        int intLocal;
        printf("Digite um número: ");
        fflush(stdout);
        fgets(buffer, sizeof(buffer), stdin);
        intLocal = atoi(buffer);
        lista[i] = intLocal;
    }

    for (i = 0; i < 4; i++){
        printf("Número %d digitado foi %d\n", i+1, lista[i]);
    }
}
