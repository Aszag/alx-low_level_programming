#include "main.h"
/**
 * @s: letters of the string
 * _puts_recursion: to print a string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_pucthar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
