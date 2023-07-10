#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;
	int invalidEntry = 0;

	for (i = 1; i < argc; i++)
	{
		int isValid = 1;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				isValid = 0;
				invalidEntry = 1;
				break;
			}
		}

		if (isValid)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
		}
	}
	
	if (!invalidEntry)
	{
		printf("%d\n", sum);
	}

	return (0);
}
