#include "main.h"

/**
 * main -Print alphabet in lowercase
 * Return:0 (success)
 */

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar("%d", alpha);
		alpha++;
	}
	_putchar("\n");
}