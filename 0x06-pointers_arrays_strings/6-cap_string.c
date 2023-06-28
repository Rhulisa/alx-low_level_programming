#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

char *cap_string(char *s)
{
	int scount = 0;
	while(s[scount] != '\0')
	{
		if(s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[scount] == ' ' || s[scount] == '\t' || s[scount] == '\n' || s[scount] == ':' || s[scount] == ':' || s[scount] == '.' || s[scount] == '.' || s[scount] == '!' || s[scount] == '?'|| s[scount] == '"' || s[scount] == '(' || s[scount] == ')' || s[scount] == '{' || s[scount] == '}')
		{
			if (s[scount +1] >= 97 && s[scount + 1] <= 122)
			{
			s[scount + 1] = s[scount + 1] -32;
			}
		}
	scount++;
	}
return (s);
}
