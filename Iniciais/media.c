#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float grades[] = {0 ,0, 0, 0};
float total_grades, n_grades;
double average;
int c = 0;

void main(void)
{
	n_grades = 4;
	
	for (c = 0; c < n_grades; c++)
	{
		printf("Give me grade number %d: ", c+1);
		scanf("%f", &grades[c]);
		total_grades = total_grades + grades[c];
	}
	
	average = total_grades/n_grades;
	printf("You got %.2f points in average", average);
	
	if (average >= 6)
	{
		printf("\nYou passed man!");
	}
	else
	{
		printf("\nGood luck next time, mate!");
	}
}
