#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - dupicates a string
 * @str: string to be copied/duplicated
 *
 * Return: string copy.
 */

char *_strdup(char *str)
{
	size_t length = strlen(str);
	char *copystr = malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if (copystr == NULL)
	{
		return (NULL);
	}

	strcpy(copystr, str);
	return (copystr);
}
