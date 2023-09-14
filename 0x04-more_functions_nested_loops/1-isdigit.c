#include "main.h"
/**
 * _isdigit -to check a digit
 * Return: 1 if is a digit, 0 otherwise
 * @c: a value in integer
 */
int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
		return (1);
	else
		return (0);
}
