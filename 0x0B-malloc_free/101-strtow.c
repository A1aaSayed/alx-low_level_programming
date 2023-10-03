#include "main.h"
#include <stdlib.h>

/**
* **strtow - func that splits a string into words
* @str: string to be splited
* Return: words of the string
*/

char **strtow(char *str)
{
	char **words;
	int i, j, k, w, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	w = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			w++;
	}
	if (w == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (w + 1));
	if (words == NULL)
		return (NULL);
	k = 0;
	for (i = 0; str[i] && k < w; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			len = 0;
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;
			words[k] = malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				while (k--)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[k][j] = str[i + j];
			words[k][j] = '\0';
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}
