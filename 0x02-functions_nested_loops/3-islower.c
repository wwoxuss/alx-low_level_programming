#include "main.h"
/**
 *_islower - check if character is lowercase.
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
