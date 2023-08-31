#include "main.h"

/**
 * check_prime - check for prime numbers
 * @x: integer
 * @y: intteger
 * Return: 1
*/

int check_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check_prime(x + 1, b));
}

/**
 * is_prime_number - find prime numbers
 * @n: int
 * Return: 1
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
