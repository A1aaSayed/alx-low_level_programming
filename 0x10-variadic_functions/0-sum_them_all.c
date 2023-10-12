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
	va_list n_ptr;

	va_start(n_ptr, n);

	if (n == 0)
		return (0);

	sum = va_arg(n_ptr, int);

	for (i = 1; i < n; i++)
		sum += va_arg(n_ptr, int);

	va_end(n_ptr);
	return (sum);
}
