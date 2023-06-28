#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int count, comp;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	comp = s1[count] - s2[count];
	return(comp);
}
