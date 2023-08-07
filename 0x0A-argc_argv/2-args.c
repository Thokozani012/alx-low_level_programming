#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 On Success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
