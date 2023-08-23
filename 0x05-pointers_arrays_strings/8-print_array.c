#include "main.h"

/**
 * print_array - a func that prints an array
 * @a: array name
 * @n: array length
*/

void print_array(int *a, int n)
{
	for (int j = 0; j < n; j++)
	{
		_putchar(a[j]);
	}
	_putchar('\n');
}
