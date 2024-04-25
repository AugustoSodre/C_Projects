#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
	float n1, n2, media;
	float p1 = 1;
	float p2 = 1;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nCalculador de situação escolar!");
	printf("\n\nPrimeira nota: ");
	scanf("%f", &n1);
	printf("\nPeso da primeira nota: ");
	scanf("%f", &p1);
	printf("\nSegunda nota: ");
	scanf("%f", &n2);
	printf("\nPeso da segunda nota: ");
	scanf("%f", &p2);
	media = (n1 * p1 + n2 * p2)/(p1 + p2);
	printf("Sua média foi de %.3f", media);
}
