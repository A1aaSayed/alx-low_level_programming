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

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min < max; i++)
		a[i] = min++;

	return (arr);
}
