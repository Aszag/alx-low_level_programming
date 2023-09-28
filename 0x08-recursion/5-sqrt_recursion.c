#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an input value
 * @s: square root
 * Return: natural square
 */

int square(int n, int s);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - to find square root
 * @s: square root
 * @n: an input value
 * Return: naturak square
 */
int square(int n, int s)
{
	if (s * s == n)
	{
		return (s);
	}
	else if (s * s < n)
	{
		return (square(n, s + 1));
	}
	else
		return (-1);
}
