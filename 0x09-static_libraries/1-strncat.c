#include "main.h"

/**
 * _strncat - concat two strings
 * @dest: first str
 * @src: second str
 * @n: number of char
 * Return: return the concated str
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
