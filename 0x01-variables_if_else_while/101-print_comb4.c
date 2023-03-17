#include <stdio.h>
/**
 * main - Prints all possible combinations of three digit numbers.
 * Return: returns 0.
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
