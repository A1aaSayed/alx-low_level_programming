#include "main.h"
#include <string.h>

/**
 * rev_string - a func that reverses a string
 * @s: the string that will be revesed
 * Return: Always 0
*/

void rev_string(char *s)
{
	int n = strlen(s);

	for (int i = 0; i < n / 2; i++)
	{
		char temp = s[i];

		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
}
