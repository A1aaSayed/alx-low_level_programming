#include "main.h"
#include <string.h>

/**
 * rev_string - a func that reverses a string
 * @s: the string that will be revesed
 * Return: Always 0
*/

void rev_string(char *s)
{
	int i = 0, j, n;
	char temp;

	while (s[i] != '\0')
	{
		i++
	}
	n = i - 1;
	for (j = 0; n >= 0 && j < n; j++)
	{
		temp = s[j];
		s[j] = s[n];
		s[n] = temp;
	}
}
