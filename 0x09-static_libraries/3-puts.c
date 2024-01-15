#include "main.h"

/**
 * _puts - Writes a string to the stdout.
 * @s: string to write
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
