#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: a pointer to the duplicated string, NULL if insufficient.
 */

char *_strdup(char *str)
{
	int x, y;
	char *z;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	z = malloc(sizeof(char) * (x + 1));

	if (z == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		z[y] = str[y];

	return (z);
}
