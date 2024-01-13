include "main.h"

/**
 * _strlen - Checks the length of a string.
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
