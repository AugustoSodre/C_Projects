#include <stdio.h>
#include <conio.h>

int main(void){
    int answer = 0;
    int cont = 0;
    int caracteres = 30;
    char vet[caracteres];
    while (answer != 13 && caracteres > 0){
            vet[cont] = getche();
            cont++;
            caracteres--;
    }
    system("cls");
    printf("Voce escreveu: ");
    puts(vet);
    return 0;
}
