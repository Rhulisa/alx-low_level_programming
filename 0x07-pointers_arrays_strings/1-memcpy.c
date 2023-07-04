#include "main.h"

/**
 * *main - Entry point
 * **_memcpy(char *dest, char *src, unsigned int n) - functions to copy @n
 * *@src: bytes from memory
 * *@dest: to memory area
 * *@n: function copy
 * *Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
