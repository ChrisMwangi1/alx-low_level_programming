#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Checks for non-digit char in a string.
 * @s: string to evaluate
 * Return: 0 if a non-digit is found, 1 if not found
 */

int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - Returns a string's length
 * @s: string input
 * Return: length of the string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * errors - handles errors for main function.
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: number of command line arguments
 * @argv: array of arguments in command line
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l, len1, len2, x, c, d1, d2, *r, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	l = len1 + len2 + 1;
	r = malloc(sizeof(int) * l);
	if (r == NULL)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		r[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = s1[len1] - '0';
		c = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			d2 = s2[len2] - '0';
			c += r[len1 + len2 + 1] + (d1 * d2);
			r[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[len1 + len2 + 1] += c;
	}
	for (x = 0; x < l - 1; x++)
	{
		if (r[x])
			a = 1;
		if (a)
			_putchar(r[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
