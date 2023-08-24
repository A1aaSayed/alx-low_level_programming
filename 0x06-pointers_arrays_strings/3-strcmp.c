#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first str
 * @s2: second str
 * Return: return the concated str
*/

char int _strcmp(char *s1, char *s2)
{
	int flag = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			flag = ((int) *s1 - 48 - (int) *s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (flag);
}
