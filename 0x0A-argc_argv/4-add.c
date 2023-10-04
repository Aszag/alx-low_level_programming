#include<stdio.h>
#include<stdlib.h>
/**
 * main -print sum of numbers
 * @argc: the number of argument
 * @argv: array of pointer
 * Return: 0, or 1 if symbols are not digit
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

