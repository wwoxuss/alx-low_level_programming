#include "main.h"
/**
 *_isalpha - check if character is alphabetic.
 *@c: the character to be checked
 *Return: returns 1 if the character is alphabetic, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
