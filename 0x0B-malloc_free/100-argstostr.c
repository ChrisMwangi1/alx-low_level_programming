#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Concatenates all arguments of your program.
 * @ac: count
 * @av: vector
 * Return: Pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *x;
	int a, b, c = 0, d = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	x = malloc(sizeof(char) * d + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			x[c] = av[a][b];
			c++;
		}
		if (x[c] == '\0')
		{
			x[c++] = '\n';
		}
	}
	return (x);
}
