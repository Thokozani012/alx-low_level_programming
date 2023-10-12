#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

/**
 * main - Searches for files in the current PATH
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *path, *path_cpy, *token, filepath[256];
	int i;

	if (argc < 2)
	{
		printf("Usage: %s path_to_file ...\n", argv[0]);
		return (1);
	}

	path = getenv("PATH");
	if (path ==  NULL)
	{
		printf("Error: PATH environmental variable not found");
		return (1);
	}

	path_cpy = strdup(path);
	if (path_cpy == NULL)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}

	token = strtok(path_cpy, ":");
	while (token != NULL)
	{
		for (i = 1; i < argc; i++)
		{
			snprintf(filepath, sizeof(filepath), "%s/%s", token, argv[i]);
			if (access(filepath, F_OK) == 0)
			{
				printf("%s\n", filepath);
			}
		}
		token = strtok(NULL, ":");
	}

	free(path_cpy);
	return (0);
}
