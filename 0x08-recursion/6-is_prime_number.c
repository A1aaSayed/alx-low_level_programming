#include "main.h"
/**
 * is_prime_number - find prime numbers
 * @n: int
 * Return: 1
*/
int is_prime_number(int n)
{
	bool is_prime = true;

	if (n <= 1)
		is_prime = false;
	else
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
				is_prime = false;
		}
	}

	if (is_prime)
		return (1);
	else
		return (0);
}
