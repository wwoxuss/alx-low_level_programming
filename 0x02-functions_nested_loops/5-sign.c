#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * n: The number to be checked.
 * Return: returns 1 if the number is positive, 0 if the number equals 0, -1 if the number is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
}
