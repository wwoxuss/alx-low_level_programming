#include <stdio.h>
/**
 * main - Prints lowercase alphabet.
 * Return: returns 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet <= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
