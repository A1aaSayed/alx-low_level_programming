#include "main.h"

/**
 * check - checks to see if number is prime
 * @n:int
 * @i:int
 * Return:int
 */

int check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (check(n, i - 1));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, n - 1));
}
