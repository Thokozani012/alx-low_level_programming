#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 On Success.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
