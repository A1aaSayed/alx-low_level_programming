#include "main.h"

/**
 * _strcat - concate two strings
 * @dest: string
 * @src: string
 * Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int c, ch;

	c = 0;
	while (dest[0])
		c++;
	for (ch = 0; src[ch]; ch++)
		dest[c++] = src[ch];

	return (0);
}
