#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float cat_op, cat_ad, hip;

void main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("D�-me o cateto oposto: ");
	scanf("%f", &cat_op);
	printf("D�-me o cateto adjacente: ");
	scanf("%f", &cat_ad);
	hip = sqrt( pow(cat_op, 2) + pow(cat_ad,2) );
	printf("Sua hipotenusa � %f", hip);
}
