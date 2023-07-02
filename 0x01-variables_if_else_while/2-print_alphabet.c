#include<stdio.h>
#include <ctype.h>
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 * */

int main(void)
{
int lowCase = 'a';

        while (lowCase <= 'z')        
				{
					                putchar(lowCase);
							lowCase += 1;
							                }
	        
	        putchar('\n');
		        return(0);
}
