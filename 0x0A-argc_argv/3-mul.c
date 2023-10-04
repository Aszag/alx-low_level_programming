#include<stdio.h>
/**
 * main - print the result of two numbers
 * @argc: a number of command line
 * @argv: array in command line
 * Return: 0,otherwise 1
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
