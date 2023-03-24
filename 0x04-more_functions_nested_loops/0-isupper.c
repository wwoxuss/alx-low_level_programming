#include "main.h"

/**
 * _isupper - Checks if the character is uppercase.
 * @c: The character to be checked.
 * Return: returns 1 if character is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
