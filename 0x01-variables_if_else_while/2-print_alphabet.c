#include <stdio.h>
/**
 * main - Prints lowercase alphabet.
 * Return: returns 0.
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++ )
	{
		putchar(alphabet);
	}
	putchar("\n");
	return (0);
}
