#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers.
 * @argc: no. of command line arguments
 * @argv: arrays that contains command line arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int x, y, ad = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		ad += atoi(argv[x]);
	}
	printf("%d\n", ad);
	return (0);
}
