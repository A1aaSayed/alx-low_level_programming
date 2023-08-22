#include "main.h"
#include <string.h>

/**
 * rev_string - a func that reverses a string
 * @s: the string that will be revesed
 * Return: Always 0
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	while (s[l] != '\0')
	{
		for (i = 0; i < l / 2; i++)
		{
			temp = s[i];
			s[i] = s[l - 1 - i];
			s[l - 1 - i] = temp;
		}
	}
}
