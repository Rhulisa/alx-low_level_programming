#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */


char *_strncat(char *dest, char *src, int n)
{
	int len,z;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, len++)
	{
		dest[len] = src[z];
	}
	dest[len] = '\0';
	return (dest);
}
