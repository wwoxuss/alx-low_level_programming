#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *@s: 1st value
 *@b: 2nd value
 *@n: 3rd value
 *
 * Return: returns char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
