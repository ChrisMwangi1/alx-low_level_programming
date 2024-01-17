#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: number of command line arg.
 * @argv: array holding the command line arg.
 * Return: 0 (Success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
