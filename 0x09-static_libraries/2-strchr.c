include "main.h"

/**
 * _strchr - Converts c in a string to a character
 * @s: value
 * @c: value
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
	if (s[x] == c)
		return (&s[x]);
	}
	return (0);
}
