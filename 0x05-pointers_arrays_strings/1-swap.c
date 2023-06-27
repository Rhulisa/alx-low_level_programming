#include "main.h"
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */

void swap_int(int *a, int *b)
{

int change;

change = *b;
*b = *a;
*a = change;
}
