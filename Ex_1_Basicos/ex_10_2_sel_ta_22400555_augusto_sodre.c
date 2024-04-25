#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(void)
{
	float a, b, c, delta, x1, x2;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nCalculador das raízes de equações de segundo grau!");
	printf("\nEquação base: ax² + bx + c");
	printf("\nDê-me o coeficiente a: ");
	scanf("%f", &a);
	printf("\nDê-me o coeficiente b: ");
	scanf("%f", &b);
	printf("\nDê-me o coeficiente c: ");
	scanf("%f", &c);
	delta = pow(b,2.0)- (4.0*a*c);
	printf("\nDelta: %.2f\n", delta);
	if (delta == 0)
	{
		//x1 igual a x2
		float raiz_delta = sqrt(delta);
		x1 = (-b + raiz_delta) / (2.0 * a);
		printf("Raíz dupla: %f", x1);
	}
	else
	{
		if (delta > 0)
		{
			//calcula x1 e x2 separadamente
			float raiz_delta = sqrt(delta);
			x1 = (-b + raiz_delta) / (2.0 * a);
			x2 = (-b - raiz_delta) / (2.0 * a);
			printf("Raíz 1: %f \nRaíz 2: %f", x1, x2);
		}
		else
		{
			//não calcula as raízes
			printf("Não existem raízes no conjunto dos números reais");
		}
	}
}
