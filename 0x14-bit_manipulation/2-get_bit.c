#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: bits
 * @index: position of the bit
 * Return: the value of a bit at given index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = 1 << index;
	result = n & b;
	if (result == b)
		return (1);
	return (0);
}
