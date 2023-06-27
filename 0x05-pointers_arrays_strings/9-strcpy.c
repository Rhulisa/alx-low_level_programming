#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do{
		z++;
		dest[z] = src[z];
	}while (src[z] != '\0');
	return (dest);
}
