#include <stdio.h>
#include <strings.h>

void main(){
    char buffer[60];
    int contNumCaracteres = 0;
    for (int i = 0; i < 60; i++){
        buffer[i] = '*';
    }
    printf("Digite uma String de até 60 caracteres: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("\nString digitada: ");
    for (int i = 0; i < 60; i++){
        if (buffer[i] != '*'){
            contNumCaracteres += 1;
            printf("%c", buffer[i]);
        }
    }
    printf("\nNumero de caracteres: %d\n", contNumCaracteres);
}
