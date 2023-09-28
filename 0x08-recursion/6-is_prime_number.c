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
	if (m >= n && n >= 2)
	{
		return (1);
	}
	else if (n % m == 0 || n <= 1)
	{
	       return (0);
	}
	else
	{
		return (check_prime(n, m + 1));
	}
}
