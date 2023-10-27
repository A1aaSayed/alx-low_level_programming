#include "main.h"

/**
 * flip_bits - the number of bits you need to flip
 * @n: first number
 * @m: second number
 * Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;

	for (; m | n;)
	{
		if ((n & 1) != (m & 1))
			counter++;
		n = n >> 1;
		m = m >> 1;
	}

	return (counter);
}
