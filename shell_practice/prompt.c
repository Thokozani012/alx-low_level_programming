#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

/**
 * main - Prinst user's commands
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(void)
{
	while (1)
	{
		printf("$ ");

		size_t len = 0;
		ssize_t nread;
		char *lineptr = NULL;

		nread = getline(&lineptr, &len, stdin);
		if (nread == -1)
		{
			perror("Error: getline failed\n");
			return (-1);
		}

		printf("%s", lineptr);
		free(lineptr);
	}

	return (0);
}
