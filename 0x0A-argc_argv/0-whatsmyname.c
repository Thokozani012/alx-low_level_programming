#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the name of teh program
 * @argc: Arguement count
 * @argv: arguement vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *lastslash = strrchr(argv[0], '/');

	if (lastslash == NULL)
	{
		lastslash = strrchr(argv[0], '\\');
	}

	if (lastslash != NULL)
	{
		printf("%s\n", lastslash + 1);
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
