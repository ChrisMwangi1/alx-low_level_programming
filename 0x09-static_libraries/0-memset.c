include "main.h"

/**
 * memset - Sets a specific value to a block of memory
 * @s: Adress of block of memory
 * @b: Value
 * @n: Count bytes
 * Return: Array with new value of n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
