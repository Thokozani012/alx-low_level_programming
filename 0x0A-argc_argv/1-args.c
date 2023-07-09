#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguents passed into it
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc -1);
	return (0);
}
