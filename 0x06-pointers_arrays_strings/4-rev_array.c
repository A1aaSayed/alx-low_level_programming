#include "main.h"

/**
 * reverse_array - a func that reverses the content of an array of ints
 * @a: array
 * @n: size of the arary
 * Return: return the reversed array
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
