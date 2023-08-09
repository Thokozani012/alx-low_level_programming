#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new duplicate string
 * @str: string to be duplicated
 *
 * Return: On success a duplicate string,or NULL otherwise
 */

char *_strdup(char *str)
{
	int length;
	char *strdupl;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str) + 1;
	strdupl = malloc(length);

	if (strdupl == NULL)
	{
		return (NULL);
	}
	_strcpy(strdupl, str);

	return (strdupl);
}
