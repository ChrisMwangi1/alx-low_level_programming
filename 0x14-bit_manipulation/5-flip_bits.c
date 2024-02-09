#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int curt;
	unsigned long int x = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		curt = x >> y;
		if (curt & 1)
			count++;
	}
	return (count);
}
