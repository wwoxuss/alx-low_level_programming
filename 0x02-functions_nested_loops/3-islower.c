#include "main.h"
/**
 *_islower - check if character is lowercase.
 *@c: the character to be checked
 *Return: returns 1 if the character is lowercase, otherwise 0.
 */
int _islower(int c)	
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
