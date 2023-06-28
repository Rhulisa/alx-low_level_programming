#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

char *leet(char *s)
{
	int slen, count;
	char leet[] = "aAeEoOtTlL";
	char letNum[] = "4433007711";

	slen = 0;
	while (s[slen] != '\0')
	{
		count = 0;
		while(count < 10)
		{
			if (leet[count] == s[slen])
			{
				s[slen] = letNum[count];
			}
			count++;
		}
		slen++;
	}
	return (s);
}
