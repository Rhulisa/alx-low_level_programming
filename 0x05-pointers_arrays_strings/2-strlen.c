#include "main.h"
/*
 * *_strlen - checks the length of the string
 * @s: - string to be checked 
 * *main - Entry point
 * *Return: The length of the string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		
			string_length++;
			s++;
	}
			return (string_length);
	
}
