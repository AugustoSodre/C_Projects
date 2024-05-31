#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int numAlunos, i, numNotasAcimaMedia;
    char buffer[40];
    printf("Digite o número de alunos: ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    numAlunos = atoi(buffer);
    float notas[numAlunos], somaNotas, media;
    for (i = 0; i < numAlunos; i++){
        char vetAuxLocal[256];
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    for (i = 0;  i < numAlunos; i++){
        somaNotas += notas[i];
    }

    media = somaNotas/numAlunos;

    for (i = 0; i < numAlunos; i++){
        if (notas[i] > media){
            numNotasAcimaMedia += 1;
        }
    }


    printf("\nMedia %.2f", media);
    printf("\nNumero notas acima da media: %d", numNotasAcimaMedia);
}
