#include <stdio.h>
#include <string.h>

void main(void){
    char nome[30];
    char nomeInvertido[30];
    gets(nome);
    int cont = strlen(nome) - 1;
    for (int i = 0; i < strlen(nome); i++){
            nomeInvertido[i] = nome[cont];
            cont--;
    }
    nomeInvertido[strlen(nome)] = '\0';
    puts(nomeInvertido);
}
