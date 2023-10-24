#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: first node
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
