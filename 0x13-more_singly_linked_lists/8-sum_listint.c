#include "lists.h"

/**
 * sum_listint - sum of linked list data
 * @head: first node
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
