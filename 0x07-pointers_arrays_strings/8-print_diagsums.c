#include "main.h"
/**
 * *main - Entry point
 * *
 * *Return: Always return 0 (success)
 * */
void print_diagsums(int *a, int s)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < s; i++)
	{
		sum1 += a[i];
		a += s;
	}

	a -= s;

	for (i = 0; i < s; i++)
	{
		sum2 += a[i];
		a -= s;
	}
	printf("%d, %d\n" , sum1, sum2);
}
