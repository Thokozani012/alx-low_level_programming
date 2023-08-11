#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Calculates the string length
 * @str: The string
 *
 * Return: On success, string length
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
 * string_nconcat - Concatenates two strings until 'n' byes of string 2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes that determine the size of string 2 to be combined
 *
 * Return: Pointer to the concatenated string, or Null on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, totalLength;
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n < len2)
	{
		totalLength = len1 + n;
	}
	else
	{
		totalLength = len1 + len2;
	}

	ptr = malloc(sizeof(char) * (totalLength + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1 && s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
