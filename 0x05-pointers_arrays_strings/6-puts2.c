#include "main.h"
/**
 * puts2 - print every other char
 * @str: the string
 * Return: 0
*/

void puts2(char *str)
{
	for (int string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
