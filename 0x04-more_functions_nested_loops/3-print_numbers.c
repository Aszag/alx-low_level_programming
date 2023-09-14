#include "main.h"
/**
 * print_numbers -To print numbers from 0 to 9
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar('%d', n);
		return (0);
	}
	_putchar('\n');
}
