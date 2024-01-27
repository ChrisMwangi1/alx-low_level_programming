#include "variadic_functions.h"
/**
 * print_all - A function that prints anything
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int x, sp;
	char *st;

	va_list t;

	va_start(t, format);

	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(t, int));
				sp = 0; /** Checks if condition is met */
				break;
			case 'i':
				printf("%d", va_arg(t, int));
				sp = 0;
				break;
			case 'f':
				printf("%f", va_arg(t, double));
				sp = 0;
				break;
			case 's':
				st = va_arg(t, char *);
				if (!st)
					st = "(nil)";
				printf("%s", st);
				break;
			default:
				sp = 1;
				break;
		}
		if (format[x + 1] != '\0' && sp == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(t);
}
