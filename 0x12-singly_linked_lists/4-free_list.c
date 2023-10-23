#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: first node
*/

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
		tmp = head;
	}
}
