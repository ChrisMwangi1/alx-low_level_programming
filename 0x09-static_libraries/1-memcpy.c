#include "main.h"

/**
 * _memcpy - Copies a memory adress.
 * @dest: memory stored adress
 * @src: memory copied adress
 * @n: bytes number
 * Return: pointer storing the adress of the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
