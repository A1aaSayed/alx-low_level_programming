#include "main.h"

/**
 * swap_int - func that swaps two integers
 * @a: first int
 * @b: second int
 * Return: Alwas 0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
