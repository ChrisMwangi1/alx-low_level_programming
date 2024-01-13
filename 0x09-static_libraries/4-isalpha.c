include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet.
 * @c: char to check
 * Return: 1 if alphabet, 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
