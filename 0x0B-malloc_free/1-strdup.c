#include "main.h"
/**
 * _strdup -returns a pointer to a newly allocated space in memory
 * @str: a string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, size;
	char *copy;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	;

	copy = malloc(size * sizeof(*str) + 1);

	if (copy == 0)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			copy[i] = str[i];
	}
	return (copy);
}
