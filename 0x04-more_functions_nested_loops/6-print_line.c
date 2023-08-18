#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: number of _
 * Return: Always 0
*/

void print_line(int n)
{
	while (n)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
