#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * sum_them_all - to calculate the sum
 * @n: number of arguments
 * Return: sum
 * @...: the integer value
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	while (i--)
		s += va_arg(args, int);
	va_end(args);
	return (sum);
}
