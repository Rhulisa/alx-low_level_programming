
#include "main.h"
/**
 * *pring_last_digit - print last digit
 * *
 * * @n: character to be checked
 * *
 * *Return: 1
 * */

int print_last_digit(int n)
{
	 int last;

	 last= n % 10;
	 if (last < 0)
	 {
		 last = last * -1;
	 }
	 _putchar(last + '0');
	 return (last);
}
