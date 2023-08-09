#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Determines the string length
 * @str: String
 *
 * Return: String length
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
 * str_concat - Concatenates two strings
 * @s1: Destination string
 * @s2: Source string
 *
 * Return: Concatenated string pointer,
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int j, k, len1, len2, length;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	length = len1 + len2;

	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len1; j++)
	{
		ptr[j] = s1[j];
	}

	for (k = 0; k < len2; k++)
	{
		ptr[j + k] = s2[k];
	}

	ptr[j + k] = '\0';
	return (ptr);
}
