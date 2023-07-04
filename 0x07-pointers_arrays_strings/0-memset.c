#include "main.h"

/**
 * *main - Entry point
 * **@_memset - file with memory
 * *@s: memory area to be fille
 * *@b: char to copy
 * *@n: number of times to copy
 * *Return: pointer to thhe memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
