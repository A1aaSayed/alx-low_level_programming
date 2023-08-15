#include "main.h"

/**
 * times_table - function that prints the 9 times table
 * Return
*/

void times_table(void)
{
	int i, j, multiply;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			multiply = i * j;

			if (multiply <= 9)
				_putchar(' ');
			else
				_putchar((multiply / 10) + '0');

			_putchar((multiply % 10) + '0');
		}
		_putchar('\n');
	}
}
