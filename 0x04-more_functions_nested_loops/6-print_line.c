#include "main.h"
/**
 * print_line -To print lines
 * Retunr: 0
 * @n: is the number of lines
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
			_putchar('_');
		_putchar('\n');
	}
}
