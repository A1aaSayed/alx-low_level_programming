#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print linked list
 * @h: head of list
 * Return: len of list
 */
size_t print_list(const list_t *h)
{
	const struct list_s *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		count++;
	}
	return (count);
}
