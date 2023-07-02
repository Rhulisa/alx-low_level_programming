#include<stdio.h>
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 * */
int main(void)
{

			int lowCase = 'a';
				

					        while (lowCase <= 'z')        
									{
										if(lowCase == 'e' || lowCase == 'q')
										{
											lowCase += 1;
										}
										else
										{
											putchar(lowCase);
											lowCase += 1;
										}
									}

						               
						        putchar('\n');
							        return(0);
}
