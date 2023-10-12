#include "variadic_functions.h"

/**
 * print_numbers - to print numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * @...: arguments values
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(ls, int));
		else if (separator && i == 0)
			printf("%d", va_arg(ls, int));
		else
			printf("%s%d", separator, va_arg(ls, int));
	}
	va_end(ls);
	printf("\n");
}

