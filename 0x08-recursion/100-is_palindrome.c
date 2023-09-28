#include "main.h"

/**
 * is_palindrome - function returns 1 if s is palind, 0 if s is not palind
 * @s: string
 * Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	if (len <= 1)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	s[len - 1] = '\0';
	return (is_palindrome(s + 1));
}
