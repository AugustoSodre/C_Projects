#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int i;
	float f = -50;
	float c;
	char answer = 0x0d;
	do{
		system("cls");
		for (i = 0; i <= 25; i++){
			c = (5.0/9.0)*(f-32.0);
			printf("Fahrenheit: %.2f\t\tCelcius: %.2f\n", f, c);
			f += 1;
		}
		printf("Deseja continuar? ");
		answer = getche();
	} while (answer == 0x0d);
}
