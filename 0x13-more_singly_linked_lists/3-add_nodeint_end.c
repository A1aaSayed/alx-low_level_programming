#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of the linked list
 * @head: first node
 * @n: integer stored in the node
 * Return: new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!head)
	{
		*head = node;
		return (node);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = node;
	return (node);
}
