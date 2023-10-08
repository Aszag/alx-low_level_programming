#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * string_nconcat -to concatinate two strings
 * @s1: fisrt string
 * @s2: second string
 * @n: an integer
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *op;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	op = malloc(sizeof(char) * (s1len + n) + 1);

	if (op == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			op[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			op[s1len + i] = s2[i];
		op[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			op[i] = s1[i];
		for (i = 0; i < n; i++)
			op[s1len + i] = s2[i];
		op[s1len + i] = '\0';
	}
	return (op);
}
