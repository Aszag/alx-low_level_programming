#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s: string parameter input
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
