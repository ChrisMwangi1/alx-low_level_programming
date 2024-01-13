#include "main.h"

/**
 * _isupper - Checks if character is uppercase
 * @c: character to check
 * Return: 1(uppercase), otherwise 0
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
