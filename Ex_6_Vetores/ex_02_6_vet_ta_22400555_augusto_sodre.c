#include <stdio.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "PT-BR");
    int lista [4], i;
    char buffer[40];
    for (i = 0; i < 4; i++){
        int intLocal;
        fflush(stdout);
        fgets(buffer, sizeof(buffer), stdin);
        intLocal = atoi(buffer);
        lista[i] = intLocal;
    }

    for (i = 3; i > -1; i--){
        printf("Número digitado: %d\n", lista[i]);
    }
}
