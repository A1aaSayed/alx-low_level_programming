#include "main.h"

/**
 * wildcmp_recursion - compare two strings
 * @s1: first string
 * @s2: second string
 * @i: first index
 * @j: second index
 * Return: 0 or 1
*/

int wildcmp_recursion(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s2[j] == '*')
	{
		int ss1 = wildcmp_recursion(s1, s2, i, j + 1);
		int ss2 = wildcmp_recursion(s1, s2, i + 1, j);

		return (ss1 || ss2);
	}

	if (s1[i] != s2[j])
		return (0);

	return (wildcmp_recursion(s1, s2, i + 1, j + 1));
}

/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
*/
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursion(s1, s2, 0, 0));
}
