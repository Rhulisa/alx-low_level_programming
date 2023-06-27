#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

