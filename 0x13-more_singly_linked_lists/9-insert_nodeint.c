#include "lists.h"

/**
 * insert_nodeint_at_index - add node at a specific position
 * @head: first node
 * @idx: position of the new node
 * @n: integer stored in the new node
 * Return: address of the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *node = malloc(sizeof(listint_t));
	unsigned int i;

	if (!node)
		return (NULL);

	node->n = n;

	if (!*head && idx == 0)
	{
		*head = node;
		return (node);
	}

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (&head);
	}

	ptr = *head;
	for (i = 0; i < idx - 1; i++)
		if (ptr)
			ptr = ptr->next;
		else
			return (NULL);

	node->next = p->next;
	p->next = node;
	return (node);
}
