#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of a list
 * @head: first node
 * @str: string that will be stored in the node
 * Return: new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);
	node->str = strdup(str);

	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);
	if (!head)
	{
		*head = node;
		return (node);
	}
	node->next = *head;
	*head = node;
	return (node);
}
