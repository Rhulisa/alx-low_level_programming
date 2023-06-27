#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */
void print_rev(char *s)
{
	int start = 0;
	
	int o;

	while (*s != '\0')
	{
	start++;
	s++;
	}
	s--;

	for (o = start; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

