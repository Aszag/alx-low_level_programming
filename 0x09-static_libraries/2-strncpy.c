#include "main.h"
/**
 * _strncpy - a fonction to print a string
 * @dest: a poniter
 * @src: a pointer also
 * @n: a byte
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i];
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
