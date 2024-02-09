#include "main.h"

/**
 * _pwr - Calculates the base ^ power
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pwr(unsigned int base, unsigned int power)
{
	unsigned long int sum;
	unsigned int x;

	sum = 1;
	for (x = 1; x <= power; x++)
		sum *= base;
	return (sum);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, chk;
	char flg;

	flg = 0;
	div = _pwr(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		chk = n & div;
		if (chk == div)
		{
			flg = 1;
			_putchar('1');
		}
		else if (flg == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
