#include "main.h"

/**
 * _puts_recursion - To print a string followed by a new ligne
 * @s: a pointer to string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
