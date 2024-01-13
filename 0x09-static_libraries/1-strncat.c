#include "main.h"

/**
 * _strncat - Joins two strings using n bytes from src.
 * @dest: one string
 * @src: another string
 * @n: maximum bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
