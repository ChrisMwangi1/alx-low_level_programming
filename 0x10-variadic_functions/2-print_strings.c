#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings.
 * @separator: string to print btwn strings
 * @n: no. of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *st;

	va_list ptr_s;

	va_start(ptr_s, n);

	for (x = 0; x < n; x++)
	{
		st = va_arg(ptr_s, char *);

		if (!st)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}

		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr_s);
}
