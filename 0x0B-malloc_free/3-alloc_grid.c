#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * alloc_grid -returns a pointer to a 2 dimensional array of integers
 * @width: number of colums
 * @height: number of rows
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	tab = malloc(sizeof(*tab) * height);
	if (width <= 0 || height <= 0 || tab == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(**tab) * width);
		if (tab[i] == 0)
		{
			free(tab);
			for (j = 0; j <= height; j++)
				free(tab[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
