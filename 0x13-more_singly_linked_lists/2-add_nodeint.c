#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: first node
 * @n: integer stored in the new node
 * Return: node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;

	if (!head)
	{
		*head = node;
		return (node);
	}
	else
	{
		node->next = *head;
		*head = node;
		return (node);
	}
}
