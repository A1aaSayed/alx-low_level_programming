#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: first node
 * @str: string to store in the node
 * Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head, *node = malloc(sizeof(list_t));

	if (!str || !node)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);

	if (!*head)
	{
		*head = node;
		return (node);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = node;
	node->next = NULL;

	return (node);
}
