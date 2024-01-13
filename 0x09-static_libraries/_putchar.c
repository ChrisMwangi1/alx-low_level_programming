#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: Character to write
 * Return: 1 (Success)
 * -1 is returned on error, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
