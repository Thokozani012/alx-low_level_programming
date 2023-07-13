#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int i;
	unsigned int j;
	unsigned int s1Len = 0;
	unsigned int s2Len = 0;
	unsigned int s3Len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1Len])
	{
		s1Len++;
	}
	while (s2[s2Len])
	{
		s2Len++;
	}

	if (n < s2Len)
	{
		s3Len = s1Len + n;
	}
	else
	{
		s3Len = s1Len + s2Len;
	}

	s3 = malloc(sizeof(char) * s3Len + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	while (i < s1Len)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j <= s3Len)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	return (s3);
}
