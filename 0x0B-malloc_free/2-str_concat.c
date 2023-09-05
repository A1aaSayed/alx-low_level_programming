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
	int i, j, k, z, len1, len2, size;
	char *str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	len1 = i;
	j = 0;
	while (s2[j] != '\0')
		j++;
	len2 = j;
	size = len1 + len2;

	str = (char *) malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		str[k] = s1[k];
	for (z = 0; z < len2; z++)
		str[k + z] = s2[z];
	str[size] = '\0';

	return (str);
}
