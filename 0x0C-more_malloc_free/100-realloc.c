#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes
 * @new_size: the new size in bytes
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *pointer = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(p);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		p[i] = pointer[i];
	free(ptr);
	return (p);
}
