#include <stdio.h>

void main(){
    int a[20], b[20], d[20];
    char c[20];

    printf("Preencha o vetor A:\n");
    for (int i = 0; i < 20; i++){
        scanf("%d", &a[i]);
    }

    printf("Preencha o vetor B:\n");
    for (int i = 0; i < 20; i++){
        scanf("%d", &b[i]);
    }
    while(getchar() != '\n');

    printf("Preencha o vetor C [+,-,*,/]:\n");
    for (int i = 0; i < 20; i++){
        scanf(" %c", &c[i]);
    }

    for (int i = 0; i < 20; i++){
        switch (c[i]){
            case '+':
                d[i] = a[i] + b[i];
            break;

            case '-':
                d[i] = a[i] - b[i];
            break;

            case '*':
                d[i] = a[i] * b[i];
            break;

            case '/':
                if (b[i] != 0){
                    d[i] = a[i] / b[i];
                } else {
                    d[i] = 0;
                }
            break;

            default:
                d[i] = 0;
            break;

        }
    }

    for (int i = 0; i < 20; i++){
        printf(" %d ", d[i]);
    }
}
