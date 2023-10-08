#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * _calloc -to allocate a memory
 * @nmemb: number of array
 * @size: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *op;

	if (nmemb == 0 || size == 0)
		return (NULL);
	op = calloc(nmemb, size);
	if (op == NULL)
		return (NULL);
	else
		return (op);
}
