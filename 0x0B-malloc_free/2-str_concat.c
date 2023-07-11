#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: string number 1
 * @s2: string number 2
 *
 * Return: string of characters
 */

char *str_concat(char *s1, char *s2)
{
	size_t s1Len = strlen(s1);
	size_t s2Len = strlen(s2);
	char *result = malloc(sizeof(char) * (s1Len + s2Len +1));

	if (s1 ==NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2  = "";
	}
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcpy(result, s2);
	return (result);
}
