#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: first node
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;

	ptr = *head;

	while (ptr)
	{
		*head = (*head)->next;
		free(ptr);
		ptr = *head;
	}
	free(*head);
	free(ptr);
}
