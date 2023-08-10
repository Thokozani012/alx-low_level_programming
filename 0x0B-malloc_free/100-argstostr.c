#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Determines the length of a string
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
 * str_strcpy - Copies a string
 * @s1: First string
 * @s2: Second string
 *
 * Return: a duplicate string
 */

char *str_strcpy(char *s1, char *s2)
{
	int i, j, len1, len2, length;
	char *res;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	length = len1 + len2;

	res = malloc(sizeof(char) * (length + 1));
	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';
	return (res);
}

/**
 * argstostr - Concatenates all programm arguments
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: Pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int j, i, TotalLength = 0, n, currentPos = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		TotalLength += _strlen(av[j]) + 1;
	}

	ptr = malloc(sizeof(char) * (TotalLength + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < ac; n++)
	{
		for (i = 0; av[n][i] != '\0'; i++)
		{
			ptr[currentPos] = av[n][i];
			currentPos++;
		}
		ptr[currentPos] = '\n';
		currentPos++;
	}

	ptr[currentPos] = '\0';
	return (ptr);
}
