#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array holding the command line arguments
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
