#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - Copies the provide string
 * @dest: duplucate string
 * @source: source string to be duplicated
 *
 * Return: A string duplicate.
 */

char *_strcpy(char *dest, const char *source)
{
	if (dest == NULL || source == NULL)
		return (NULL);

	char *originalDest = dest;

	while (*source != '\0')
	{
		*dest = *source;
		*dest++;
		*source++;
	}

	*dest = '\0';
	return (originalDest);
}
