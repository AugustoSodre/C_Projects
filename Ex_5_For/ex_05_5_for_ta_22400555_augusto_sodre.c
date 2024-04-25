#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int i = 0;
	float feet = 0.0;
	float meter = 0.0;
	int answer = 0x0d;
	do {
		system("cls");
		printf("\tConversão metros-pés\n\n");
		printf("Metros\t\t\tPés\n");
		for (i = 0; i < 20; i++){
			if (meter <= 100){
				feet = meter / 0.3048;
				printf("%.2f", meter);
				printf("\t\t\t%.2f\n", feet);
			}
			meter++;
		} 
		printf("\nDeseja continuar?");
		answer = getche();
	} while (answer == 0x0d && meter <= 100);
}
