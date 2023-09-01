#include "main.h"

/**
 * _puts - func that prints a string
 * @str: string that will be printed
 * Return: Always 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
