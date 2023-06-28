#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int lenString, a;

	lenString = 0;
while (dest[lenString] != '\0')
	{
		lenString++;
	}
	for (a = 0; src[a] != '\0'; a++, lenString++)
	{
		dest[lenString] = src[a];
	}
	dest[lenString] = '\0';
	return(dest);
}
