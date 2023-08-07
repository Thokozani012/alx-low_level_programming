#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks each char of string for digit
 * @str: string to be checked
 *
 * Return: 0 on Success, 1 Otherwise.
 */
int _isdigit(const char *str)
{
	char *endptr;

	if (*str == '\0')
	{
		return (0);
	}

	strtol(str, &endptr, 10);
	return (*endptr == '\0');
}

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 On success,
 * 1 if the argument(s) are not numbers AND less than zero
 */

int main(int argc, char *argv[])
{
	int i;
	long sum = 0;
	long num;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]))
		{
			num = strtol(argv[i], NULL, 10);
			if (num > 0)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
