#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int i;

	while(s[count] != '\0')
		count++;

	for (i =0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
