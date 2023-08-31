#include "main.h"
/**
 * check - check sqrt
 * @n: int
 * @i: int
 * Return: sqrt or -1
*/
int check(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (check(n + 1, i));
}

/**
 * _sqrt_recursion - find sqrt root for number
 * @n: int
 * Return: sqrt root
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
