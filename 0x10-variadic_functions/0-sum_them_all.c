#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds all its paramters.
 * @n: number of paramters passed to the function.
 * @...: number of paramters to add together
 * Return: If n == 0 - 0, otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int x, sum = 0;

	va_start(a, n);

	for (x = 0; x < n; x++)
		sum += va_arg(a, int);

	va_end(a);
	return (sum);
}
