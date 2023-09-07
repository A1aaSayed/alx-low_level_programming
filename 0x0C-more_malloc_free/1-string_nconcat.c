#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: a pointer to the new allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	if (len2 >= n)
		len2 = n;

	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}
