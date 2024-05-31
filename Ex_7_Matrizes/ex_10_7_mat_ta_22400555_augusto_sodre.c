#include <stdio.h>
#include <stdlib.h>

void main(){
    int mapa [7][7] = {{0, 2, 11, 6, 15, 11, 1},
    {2, 0, 7, 12, 4, 2, 15},
    {11, 7, 0, 11, 8, 3, 13},
    {6, 12, 11, 0, 10, 2, 1},
    {15, 4, 8, 10, 0, 5, 13},
    {11, 2, 3, 2, 5, 0, 14},
    {1, 15, 13, 1, 13, 14, 0}};

    int resp = 0;
    int x = 0, y = 0;

    printf("\nCalculando o tempo de viagem!\n");

    while (resp < 1 || resp > 7){
        printf("\nDigite a origem da viagem: \n1. Osgliath \n2. Minas Tirith \n3. Edoras \n4. Isengard \n5. Esgaroth \n6.The Shire \n7. Valfenda \nResposta: ");
        scanf("%d", &resp);
        x = (resp - 1);
    }

    system("cls");
    printf("\nCalculando o tempo de viagem!\n");

    resp = 0;
    while (resp < 1 || resp > 7){
        printf("\nDigite o destino da viagem: \n1. Osgliath \n2. Minas Tirith \n3. Edoras \n4. Isengard \n5. Esgaroth \n6.The Shire \n7. Valfenda \nResposta: ");
        scanf("%d", &resp);
        y = (resp - 1);
    }

    system("cls");
    printf("\nCalculando o tempo de viagem!\n");

    printf("\nTempo de viagem: %d horas\n", mapa[x][y]);

}
