#include<stdio.h>
/**
 * *main - Entry point
 * *Return: Always return 0 (success)
 */
int main(void)
{

			int lowCase = 'a';
					int upCase = 'A';

					        while (lowCase <= 'z')        
									{
										                putchar(lowCase);
														lowCase += 1;
														                }
						        
						        while (upCase <= 'z')        
										{
											                putchar(upCase);
															upCase += 1;
															                }
							        putchar('\n');
								        return(0);
}
