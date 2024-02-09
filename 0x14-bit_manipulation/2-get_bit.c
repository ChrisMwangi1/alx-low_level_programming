#include"main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: number to check
 * @index: index at which to check
 * Return: value of the bit, -1 (Error)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, chk;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	div = 1 << index;
	chk = n & div;
	if (chk == div)
	{
		return (1);
	}
	return (0);
}
