#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: head of the linked list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int counter;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		counter++;
	}
	return (counter);
}
