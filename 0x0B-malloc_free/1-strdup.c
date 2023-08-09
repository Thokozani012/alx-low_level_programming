#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Determines the length of a string
 * @str: String
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * _strcpy - Copies the provided string
 * @dest: duplicate string
 * @source: source strng to be duplicated
 *
 * Return: S string duplicate
 */

char *_strcpy(char *dest, const char *source)
{
	char *originalDest;

	if (dest == NULL || source == NULL)
		return (NULL);

	originalDest = dest;

	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest  = '\0';
	return (originalDest);
}

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
