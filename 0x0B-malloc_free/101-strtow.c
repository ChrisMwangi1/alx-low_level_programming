#include "main.h"
#include <stdlib.h>
/**
 * count_word - Counts the number of words in a string.
 * @s: string input
 * Return: number of words
 */
int count_word(char *s)
{
	int f, g, h;

	f = 0;
	h = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			h++;
		}
	}
	return (h);
}

/**
 * strtow - Splits a string into words.
 * @str: string input
 * Return: pointer to an array of strings, NULL if fail.
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	{
		len++;
	}
	words = count_word(str);
	if (words == 0)
	{
		return (NULL);
	}
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	matrix[b] = NULL;
	return (matrix);
}
