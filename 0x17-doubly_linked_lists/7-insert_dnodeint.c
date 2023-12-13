#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a specific index
 * @h: pointer to the head of the node
 * @idx: idx in which the node will be inserted
 * @n: data of the node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *curr = *h;
	unsigned int i = 0;

	if (!h || idx > dlistint_len(*h))
		return NULL;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (curr && i < idx)
	{
		curr = curr->next;
		i++;
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (curr)
	{
		new_node->next = curr->next;
		curr->next = new_node;
		new_node->next->prev = new_node;
		new_node->prev = curr;
	}
	else
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	return (new_node);
}
