#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times followed by new line
*/

void print_alphabet_x10(void)
{
	int ch;

	for (int i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
