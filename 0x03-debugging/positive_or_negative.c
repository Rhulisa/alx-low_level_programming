#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else 
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
