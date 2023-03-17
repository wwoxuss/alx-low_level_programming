#include <stdio.h>
/**
 * main - Prints all possible combinations of two digit numbers.
 * Return: returns 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{	
			if (j > i)
			{
				putchar(i);
                        	putchar(j);
                         	if (i != 57 || j != 57)
                        	{
                                	putchar(',');
                                	putchar(' ');
                        	}
			}
		}
	}
	putchar('\n');
	return (0);
}
