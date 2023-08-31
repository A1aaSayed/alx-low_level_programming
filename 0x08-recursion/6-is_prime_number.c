#include "main.h"
/**
 * is_prime_number - find prime numbers
 * @n: int
 * Return: 1
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		return (0);
	}
}
