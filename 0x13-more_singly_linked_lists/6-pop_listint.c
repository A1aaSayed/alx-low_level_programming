#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: first node
 * Return: data of head
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!*head)
		return (0);

	data = p->n;

	*head = (*head)->next;
	ptr->next = NULL;
	free(p);
	return (n);
}
