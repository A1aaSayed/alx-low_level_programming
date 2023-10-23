#include "lists.h"

/**
 * list_len - length of linked list
 * @h: head of linked list
 * Return: length of linked list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
