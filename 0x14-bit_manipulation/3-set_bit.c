#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index
 * Return: 1 (Success), or -1 (Error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	set = 1 << index;
	*n = *n | set;
	return (1);
}
