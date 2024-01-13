#include "main.h"
/**
 * _strncpy - Copies n characters of a string.
 * @dest: input
 * @src: input
 * @n: number of char to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
