#include "main.h"
/**
 * more_numbers -tp print numbers from 0 to 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
		_putchar(j + '0');
	}
	_putchar('\n');
	}
}
