#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - find prime numbers
 * @n: int
 * Return: 1
*/

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check for prime numbers
 * @x: integer
 * @y: intteger
 * Return: 1
*/

int check_prime(int x, int y)
{
	if (y >= x && x > 1)
		return (1);
	else if (x % y == 0 || x <= 1)
		return (0);
	else
		return (check_prime(n, y + 1));
}
