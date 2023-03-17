#include <stdio.h>
/**
 * main - Prints all the numbers in base 16 lowercase.
 * Return: returns 0.
 */
int main(void)
{
	char alphabet;
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number);
	}
	for (alphabet = 'a'; alphaber <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
