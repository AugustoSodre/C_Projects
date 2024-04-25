#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(void)
{
	float a, b, c, delta, x1, x2;
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------------");
	printf("\nCalculador das ra�zes de equa��es de segundo grau!");
	printf("\nEqua��o base: ax� + bx + c");
	printf("\nD�-me o coeficiente a: ");
	scanf("%f", &a);
	printf("\nD�-me o coeficiente b: ");
	scanf("%f", &b);
	printf("\nD�-me o coeficiente c: ");
	scanf("%f", &c);
	delta = pow(b,2.0)- (4.0*a*c);
	printf("\nDelta: %.2f\n", delta);
	if (delta == 0)
	{
		//x1 igual a x2
		float raiz_delta = sqrt(delta);
		x1 = (-b + raiz_delta) / (2.0 * a);
		printf("Ra�z dupla: %f", x1);
	}
	else
	{
		if (delta > 0)
		{
			//calcula x1 e x2 separadamente
			float raiz_delta = sqrt(delta);
			x1 = (-b + raiz_delta) / (2.0 * a);
			x2 = (-b - raiz_delta) / (2.0 * a);
			printf("Ra�z 1: %f \nRa�z 2: %f", x1, x2);
		}
		else
		{
			//n�o calcula as ra�zes
			printf("N�o existem ra�zes no conjunto dos n�meros reais");
		}
	}
}
