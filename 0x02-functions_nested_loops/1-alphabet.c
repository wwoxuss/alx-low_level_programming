#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * Return: returns 0.
 */
void print_alphabet(void)
{
	char ch='a';
	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
