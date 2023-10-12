#include "variadic_functions.h"

/**
 * print_strings - to print a string
 * @separator: a string between the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list ls;

	va_strat(ls, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char*);
		if (!str)
			printf("(nil)");
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ls);
}
