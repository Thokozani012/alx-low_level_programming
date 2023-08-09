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
	int i = 0, length, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
