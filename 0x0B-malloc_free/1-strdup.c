#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - func returns a pointer to a newly allocated space
 * @str: string to be copied
 * Return: string or null
*/

char *_strdup(char *str)
{
	char *arr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i];
	arr[len] = '\0';

	return (arr);
}
