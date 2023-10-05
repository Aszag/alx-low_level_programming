#include "main.h"
/**
 * create_array - to creat an array
 * @size: size of array
 * @c: the character
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (NULL);
	while (size--)
		n[size] = c;
	return (n);
}
