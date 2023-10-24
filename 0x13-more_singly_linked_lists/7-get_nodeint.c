#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: first node
 * @index: the index of the node
 * Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	if (index == 0)
		return (ptr);

	for (i = 1; i <= index; i++)
		if (ptr)
			ptr = ptr->next;
		else
			return (NULL);

	return (ptr);
}
