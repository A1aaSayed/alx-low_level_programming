#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - func returns a pointer to a newly allocated space
 * @str: string to be copied
 * Return: string or null
*/

char *_strdup(char *str)
{
	int i, size = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	s = (char *) malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[size] = '\0';

	return (s);
}
