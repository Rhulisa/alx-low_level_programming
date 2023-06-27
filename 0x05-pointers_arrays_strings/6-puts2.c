#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */
void puts2(char *str)
{
	
	int t = 0;

	while (str[t] != '\0')
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
		t++;
	}

	_putchar('\n');
}

