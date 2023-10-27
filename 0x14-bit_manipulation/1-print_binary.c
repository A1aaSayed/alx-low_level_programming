#include "main.h"

/**
 * _pow - calculate the power
 * @base: base os the exponet
 * @pow: power of the exponet
 * Return: power
*/

unsigned long int _pow(unsigned int base, unsigned int pow)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= pow; i++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number
*/

void print_binary(unsigned long int n)
{
	unsigned long int p, result;
	char flag = 0;

	p = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (p != 0)
	{
	result = n & p;
	if (result == p)
	{
		flag = 1;
		_putchar('1');
	}
	else if (flag == 1 || p == 1)
	{
		_putchar('0');
	}
	p >>= 1;
	}
}
