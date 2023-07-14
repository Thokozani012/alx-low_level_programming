#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: fraction of @s2 bytes
 *
 * Return: Concatenated string, NULL if the function fails and if NULL,
 * is passed, it will be treated as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int s1Len = 0;
	unsigned int s2Len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1Len])
		s1Len++;
	while (s2[s2Len])
		s2Len++;

	if (n >= s2Len)
	{
		n = s2Len;
	}

	s3 = malloc(sizeof(char) * (s1Len + n + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	memcpy(s3, s1, s1Len);
	memcpy(s3 + s1Len, s2, n);
	s3[s1Len + n] = '\0';

	return (s3);
}
