#include "main.h"
/**
 * puts_half - prints the second half of a str
 * @str: char array
 * Return: 0
*/

void puts_half(char *str)
{
	int length = 0, n;

	while (str[length])
		length++;
	if (length + 1 % 2 == 0)
		n = (length / 2);
	else
		n = (length - 1) / 2;

	for (int j = n; str[length] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
