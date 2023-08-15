#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
*/

int main(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
