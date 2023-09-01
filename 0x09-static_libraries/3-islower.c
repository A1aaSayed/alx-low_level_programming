#include "main.h"

/**
 * _islower - check if c is lowercase or not
 * @c: char that the function will check
 * Return: 1 if lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
