include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the string
 * pointed to by string1 of any character
 * from the string pointed to by string2.
 * @s: input value
 * @accept: input value
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
