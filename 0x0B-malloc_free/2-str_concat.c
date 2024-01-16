#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: one string
 * @s2: second string
 * Return: newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	size_t a, b, x, y;
	char *z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}
	z = malloc(sizeof(char) * (a + b + 1));
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (x = 0; x < a; x++)
	{
		z[x] = s1[x];
	}
	for (y = 0; y < b; y++)
	{
		z[x] = s2[y];
		x++;
	}
	return (z);
}
