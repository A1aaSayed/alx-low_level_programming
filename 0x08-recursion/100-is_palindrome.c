#include "main.h"
#include <string.h>

/**
 * check - check for palindrome
 * @s: string
 * @left: left index
 * @right: right index
 * Return: palindrome
*/

int check(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (check(s, left + 1, right - 1));
}

/**
 * is_palindrome - function returns 1 if s is palind, 0 if s is not palind
 * @s: string
 * Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (!*s)
		return (1);
	return (check(s, 0, len - 1));
}
