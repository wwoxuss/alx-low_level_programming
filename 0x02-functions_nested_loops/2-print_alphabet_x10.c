#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase for 10 times.
 * Return: returns 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
