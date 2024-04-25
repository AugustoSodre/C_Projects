#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	int i;
	float f = -50;
	float c;
	for (i = 0; i <= 100; i++){
		c = (5.0/9.0)*(f-32.0);
		printf("Fahrenheit: %.2f\t\tCelcius: %.2f\n", f, c);
		f += 1;
	}
}
