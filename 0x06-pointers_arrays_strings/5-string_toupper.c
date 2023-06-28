#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

char *string_toupper(char *x)
{
		int lenString = 0;
		while (x[lenString] != '\0')
		{
			if(x[lenString] >= 97 && x[lenString] <= 122)
			{
				x[lenString] = x[lenString] - 32;
			}
			lenString++;
		}
		return(x);
}
