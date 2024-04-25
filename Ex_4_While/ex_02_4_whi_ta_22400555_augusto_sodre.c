#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int contador = 0;
	float c = 0;
	float f = 32.0;
	printf("Conversão Fahrenheit-Celcius\n");
	while (contador < 20){
		c = (5.0/9.0) * (f-32.0);
		printf("%.2f", f);
		printf("\t\t\t%.2f\n", c);
		contador++;
		f++;
	}
}
