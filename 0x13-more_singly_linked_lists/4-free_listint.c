#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: first node
*/

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
