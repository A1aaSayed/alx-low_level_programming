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

	if (!h)
		return (NULL);

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		return(add_dnodeint(h, n));
	}

	while (i < idx - 1 && curr)
	{
		curr = curr->next;
		i++;
	}

	if (!curr)
	{
		free(new_node);
		return NULL;
	}

	new_node->next = curr->next;
	new_node->prev = curr;
	if (curr->next)
		curr->next->prev = new_node;
	curr->next = new_node;

	return (new_node);
}
