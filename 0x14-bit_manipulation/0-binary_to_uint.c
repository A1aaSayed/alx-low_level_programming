#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0')
			result = result * 2;
		else if (*b == '1')
			result = result * 2 + 1;
		else
			return (0);
		b++;
	}
	return (result);
}
