#include "main.h"

/**
 * print_triangle - entry point
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, space, symbol;

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');
		for (symbol = 1; symbol <= row; symbol++)
			_putchar('#');
		_putchar('\n');
	}
}
