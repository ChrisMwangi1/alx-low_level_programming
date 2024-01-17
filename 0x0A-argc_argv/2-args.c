#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: no. of command line arguments
 * @argv: array containing command line arg..
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
