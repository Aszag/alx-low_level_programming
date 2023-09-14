#include "main.h"
/**
 * print_most_numbers -to print numbers beside 2 and 4
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		else
			_putchar(n + '0');
	}
	_putchar('\n');
}
