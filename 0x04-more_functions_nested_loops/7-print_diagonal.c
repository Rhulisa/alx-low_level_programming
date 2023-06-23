#include "main.h"
/**
 * *main - Entry point
 * print_diagonal - print diagoal line
 * @n- variable
 * *Return: Always return 0 (success)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
