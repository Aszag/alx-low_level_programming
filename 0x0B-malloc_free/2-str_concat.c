#include "main.h"
#include<stdlib.h>
/**
 * str_concat - to concatenat two strings
 * @s1: first string
 * @s2: second string
 * Return: two strings
 */
char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	char *c;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	c = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		c[s1len + i] = s2[i];
	return (c);
}