#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "shell.h"

/**
 * main - str_split function test
 *
 * Return: Always 0.
 */

int main(void)
{
	const char str[] = "This is a simple string.";
	const char delimiter[] = " ";
	int wordCount = 0, i;
	char **tokens;

	tokens = str_split(str, delimiter, &wordCount);
	printf("Tokens:\n");
	for (i = 0; i < wordCount; i++)
	{
		printf("Token %d: %s\n", i, tokens[i]);
		free(tokens[i]);
	}

	free(tokens);

	return (0);
}
