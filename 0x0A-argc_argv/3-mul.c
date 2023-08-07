#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 On Success
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 1 && argc <= 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
