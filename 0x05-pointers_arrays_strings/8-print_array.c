#include "main.h"

/**
 * print_array - a func that prints an array
 * @a: array name
 * @n: array length
*/

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
