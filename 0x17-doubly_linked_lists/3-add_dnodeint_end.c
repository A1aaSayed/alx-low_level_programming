#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to a head of the list
 * @n: data of the new node
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	while (current->next)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
