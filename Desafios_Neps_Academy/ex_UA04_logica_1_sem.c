#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int totalVotos = 0, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, voto5 = 0, voto6 = 0;
    int resp = -1;
    while (resp != 0){
        system("cls");
        printf("Qual o melhor sistema operacional para uso em servidores?\n");
        printf("1- Windows Server. \n2 - Unix. \n3 - Linux. \n4 - Netware. \n5 - Mac OS. \n6 - Outro. \nResposta: ");
        scanf("%d", &resp);
        switch(resp){
        case 1:
            totalVotos += 1;
            voto1 += 1;
            break;
        case 2:
            totalVotos += 1;
            voto2 += 1;
            break;
        case 3:
            totalVotos += 1;
            voto3 += 1;
            break;
        case 4:
            totalVotos += 1;
            voto4 += 1;
            break;
        case 5:
            totalVotos += 1;
            voto5 += 1;
            break;
        case 6:
            totalVotos += 1;
            voto6 += 1;
            break;
        default:
            break;
        }
    }
    system("cls");
    float perc1 =  (float)voto1/totalVotos*100, perc2 = (float)voto2/totalVotos*100, perc3 = (float)voto3/totalVotos*100, perc4 = (float)voto4/totalVotos*100, perc5 = (float)voto5/totalVotos*100, perc6 = (float)voto6/totalVotos*100;
    printf("Resposta:\n");
    printf("1- Windows Server: %.2f%% \n2 - Unix: %.2f%% \n3 - Linux: %.2f%% \n4 - Netware: %.2f%% \n5 - Mac OS: %.2f%% \n6 - Outro: %.2f%%  \n", perc1, perc2, perc3, perc4, perc5, perc6);

    return 0;
}
