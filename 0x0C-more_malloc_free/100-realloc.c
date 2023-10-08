#include "main.h"
#include <stdlib.h>

/**
*_realloc - function that reallocates a memory using malloc and free
*@ptr: is a pointer to the previous memory
*@old_size: size of old memory
*@new_size: new size of new memory
*Return: pointer to the malloc memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
