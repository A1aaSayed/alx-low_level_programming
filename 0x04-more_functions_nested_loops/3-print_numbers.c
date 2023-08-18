#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 1 to 9
 * Return: Always 0
*/

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}
