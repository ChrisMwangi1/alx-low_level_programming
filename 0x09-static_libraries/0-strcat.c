include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: first value
 * @src: second value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
