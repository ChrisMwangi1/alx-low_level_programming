#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: string input one
 * @s2: string input two
 * @n: number of bytes of s2
 * Return: pointer to the new memory, NULL (Fail)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *x;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;

	x = malloc(sizeof(char) * (a + b + 1));
	if (x == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		x[c] = s1[c];
	for (c = 0; c < b; c++)
		x[c + a] = s2[c];
	x[a + b] = '\0';
		return (x);
}
