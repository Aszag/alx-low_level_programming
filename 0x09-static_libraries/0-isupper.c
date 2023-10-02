#include "main.h"
/**
 * _isupper -For upper characters
 * @c: is a value in integer
 * Return: 1 if is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
