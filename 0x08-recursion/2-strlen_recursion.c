#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: a pointer to the string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (*s > '\0')
{
	i += strlen_recursion(s + 1) + 1;
}
return (i);
}
