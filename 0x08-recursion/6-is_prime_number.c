#include "main.h"
/**
 * is_prime_number -for a prime number
 * @n: an input value
 * @m: a value intiger
 * Return: 1 if the input integer is a prime number otherwise return 0
 */

int check_prime(int n, int m);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime -to check all numbers
 * @n: an input value
 * @m: a value intiger
 * Return: 1 if the input integer is a prime number otherwise return 0
 */
int check_prime(int n, int m)
{
	if (n <= 1 || (n != m && n % m == 0))
	{
		return (0);
	}
	else if (n == m)
	{
		return (1);
	}
	return (check_prime(n, m + 1));
}
