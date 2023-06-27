#include "main.h"
#include <stdio.h>
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
*/
void print_array(int *a, int n)
{
	int indexarr;

	for (indexarr = 0; indexarr < (n - 1); indexarr++)
	{
		printf("%d" , a[indexarr]);
		if (indexarr == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
