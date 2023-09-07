#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: min value in arr
 * @max: max value in arr
 * Return: a pointer to the new array
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		;
	len = i;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		a[i] = min + i;

	return (arr);
}
