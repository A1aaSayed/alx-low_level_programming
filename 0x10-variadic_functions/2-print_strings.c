#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *s;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
