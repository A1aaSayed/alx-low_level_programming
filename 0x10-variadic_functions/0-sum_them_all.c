#include <stdio.h>
#include "variadic_functions"
#include <stdarg.h>

/**
 * sum_them_all - sum all of its parameters
 * @n: parameter counter
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	sum = va_arg(list, int);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
