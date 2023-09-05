#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an arr of chars
 * @size: size of the arr
 * @c: char
 * Return: a pointer to arr, or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(arr *) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
	}
	return (arr);
}
