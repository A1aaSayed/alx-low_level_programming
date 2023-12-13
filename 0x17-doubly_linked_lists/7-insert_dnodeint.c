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

	if (!new_node)
		return (NULL);

	new_node->n = n;

	while (curr && i <= idx)
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
		new_node->next = curr;
		new_node->prev = curr->prev;
		curr->prev->next = new_node;
		curr->prev = new_node;
	}
	else
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	return (new_node);
}
