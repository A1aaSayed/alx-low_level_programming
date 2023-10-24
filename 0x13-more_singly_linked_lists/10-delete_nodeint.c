#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 * @head: firt node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre, *ptr = *head;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		ptr->next = NULL;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (ptr)
		{
			pre = ptr;
			ptr = ptr->next;
		}
		else
			return (-1);
	}

	pre->next = ptr->next;
	ptr->next = NULL;
	free(ptr);
	return (1);
}
