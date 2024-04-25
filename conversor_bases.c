#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int n_inicial, base;
int i, c;
int r[] = {};

void main(void)
{
	printf("Numeral converter!\n");
	printf("Give me a number: ");
	scanf("%d", &n_inicial);
	printf("Numeral system you would like to convert to [2/8/10/16]: ");
	scanf("%d", &base);
	i = 0;
	while (n_inicial / base != 0)
	{
		r[i] = (n_inicial%base);
		i = i + 1;
		n_inicial = n_inicial/base;
	}
	
	r[i] = n_inicial;
	
	for (c = i; c >= 0; c--)
	{
		printf("%d", r[c]);
	}
}
