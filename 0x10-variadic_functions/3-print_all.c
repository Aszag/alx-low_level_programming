#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - to print all
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *s = "";
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
}
