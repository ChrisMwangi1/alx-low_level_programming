#include "main.h"
#include <stdio.h>
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
	char *x;
	int y, z = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[y] != '\0')
		y++;

	while (s2[z] != '\0')
		z++;

	x = malloc(sizeof(char) * (y + z + 1));
	if (x == NULL)
		return (NULL);

	while (s1[y] != '\0')
	{
		x[y] = s1[y];
		y++;
	}

	while (s2[z] != '\0')
	{
		x[y] = s2[z];
		y++, z++;
	}
	x[y] = '\0';
	return (x);
}
