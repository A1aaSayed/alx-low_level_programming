#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	const struct list_s *ptr;
	size_t size = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		size++;
		ptr = ptr->next;
	}
	return (size);
}
