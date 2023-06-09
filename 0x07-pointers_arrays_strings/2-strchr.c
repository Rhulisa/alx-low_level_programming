#include "main.h"

/**
 * *main - Entry point
 * ** _strchr - functions to copy @n
 * *@s: the string
 * *@c: to memory area
 * *@n: function copy
 * *Return: pointer to @dest
 * */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
