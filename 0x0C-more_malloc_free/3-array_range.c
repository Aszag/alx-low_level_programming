#include "main.h"
#include<stdlib.h>
/**
 * array_range -to create an array of integer
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
