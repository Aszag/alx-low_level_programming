#include "function_pointers.h"
/**
 * print_name - to print aname
 * @name: the name
 * @f: a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
