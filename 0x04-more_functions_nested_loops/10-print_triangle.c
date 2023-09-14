#include "main.h"
/**
 * print_triangle -to print a triangle
 * @size: the size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((x + y) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
