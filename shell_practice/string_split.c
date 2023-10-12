#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include "shell.h"

/**
 * str_split - Splits a string
 * @str: String to be splitted
 * @delimiter: characters used to seperate words
 * @count: nuberof words plitted
 *
 * Return: An array of each word of the string
 */

char **str_split(const char *str, const char *delimiter, int *count)
{
	char **array = NULL;
	char *token;
	int i, wordCount = 0;
	char *str_cpy = strdup(str);

	if (str_cpy == NULL)
	{
		perror("Error: failed to copy 'str'\n");
		return (NULL);
	}

	token = strtok(str_cpy, delimiter);
	while (token != NULL)
	{
		wordCount++;
		array = realloc(array, sizeof(char *) * wordCount);
		if (array == NULL)
		{
			perror("Error: realloc failed\n");
			return (NULL);
		}
		array[wordCount -1] = strdup(token);
		if (array[wordCount - 1] == NULL)
		{
			for (i = 0; i < wordCount; i++)
				free(array[i]);
			free(array);
		}

		token = strtok(NULL, delimiter);
	}

	free(str_cpy);
	*count = wordCount;
	return (array);
}
