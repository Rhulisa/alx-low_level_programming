#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */
void reverse_array(int *a, int n)
{
	int temp, count;

	n = n - 1;
	count = 0;
	while (count <=n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
