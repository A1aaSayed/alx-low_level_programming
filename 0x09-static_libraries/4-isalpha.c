#include "main.h"

/**
 * _isalpha - check if char is letter or not
 * @c: The letter that will be checked
 * Return: 1 if c is letter, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
