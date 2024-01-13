#include "main.h"

/**
 * _strcpy - Copies a string from one location to another.
 * @dest: location one
 * @src: location two
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
