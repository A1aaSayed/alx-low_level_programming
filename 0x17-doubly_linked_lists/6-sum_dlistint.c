#include "lists.h"

/**
 * sum_dlistint - get the sum of a linked list
 * @head: head of the list
 * Return: sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
