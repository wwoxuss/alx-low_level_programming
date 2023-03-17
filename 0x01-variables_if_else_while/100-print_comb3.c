#include <stdio.h>
/**
 * main - Prints all possible combinations of two digit numbers.
 * Return: returns 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 57; j++)
		{	
			if (j > i)
			{
				putchar(i);
                        	putchar(j);
                         	if (i != 57 || j != 56)
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
