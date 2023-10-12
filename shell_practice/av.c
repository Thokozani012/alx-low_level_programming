#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Prints all arguments without av
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
