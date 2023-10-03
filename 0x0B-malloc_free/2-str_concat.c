#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: cancatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1_len, s2_len, len, i, j;

	if (s1 == NULL)
		s1_len = 0;
	else
	{
		for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
			;
	}
	if (s2 == NULL)
		s2_len = 0;
	else
	{
		for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
			;
	}
	len = s1_len + s2_len;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		str[i] = s1[i];

	for (j = 0; j < s2_len; j++)
		str[j + i] = s2[j];
	str[len] = '\0';

	return (str);
}
