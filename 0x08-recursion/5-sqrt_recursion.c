#include "main.h"
/**
 * sqrt - check sqrt
 * @n: int
 * @i: int
 * Return: sqrt or -1
*/
int sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return sqrt(n, i + 1);
}

/**
 * _sqrt_recursion - find sqrt root for number
 * @n: int
 * Return: sqrt root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return sqrt(n, 0);
}
