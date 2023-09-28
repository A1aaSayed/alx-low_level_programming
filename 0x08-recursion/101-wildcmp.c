#include "main.h"

/**
 * check - check if two strings are the same
 * @s1: string_1.
 * @s2: string_2
 * @i: left index.
 * @j: index 
 * Return: 1 or 0
 */
int check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (check(s1, s2, i + 1, j) || check(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string.
 *
 * Return: 1 if the two strings are the same
 */
int wildcmp(char *s1, char *s2)
{
	return (check(s1, s2, 0, 0));
}
