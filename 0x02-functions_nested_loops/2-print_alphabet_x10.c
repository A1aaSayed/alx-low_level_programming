#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
*/

void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
