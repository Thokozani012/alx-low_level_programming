#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Argumemt count
 * @argv: Argument vector
 *
 * Return: 0 on Success, Otherwise 1.
 */

int main(int argc, char *argv[])
{
	int n, m;
	int sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] < 48 || argv[n][m] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
