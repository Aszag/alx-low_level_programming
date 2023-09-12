#include "main.h"
/**
 * print_sign -Sign of a number
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n less than zero
 * @n: the charater in ASCII code
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
