#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string that contains a binary number
 *
 * Return: output(unsigned int) of the conversion.
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int sum;

	sum = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		sum <<= 1;
		if (b[x] == '1')
			sum += 1;
	}
	return (sum);
}
