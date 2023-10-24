#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: first node
 * Return: data of head
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (!*head)
		return (0);

	ptr = *head;
	n = ptr->n;

	*head = (*head)->next;
	ptr->next = NULL;
	free(ptr);
	return (n);
}
