#include "main.h"

/**
 * _strpbrk - func locates the first occurrence in
 * the str of any of bytes in str accept
 * @s: pointer
 * @accept: bytes
 * Return: pointer to bytes in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
