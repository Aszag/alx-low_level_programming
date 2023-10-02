#include "main.h"
/**
 * *_memcpy -to copie memory area
 * @dest: momery area
 * @src: source
 * @n: lenght of src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
