#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked list
 * @h: first node
 * Return: number of elements in a linked list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
