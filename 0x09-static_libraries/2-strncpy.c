#include "main.h"

/**
 * _strncpy - concat two strings
 * @dest: first str
 * @src: second str
 * @n: number of char
 * Return: return the concated str
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
