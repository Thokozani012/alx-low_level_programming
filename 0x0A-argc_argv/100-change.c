#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printf minimum number of coins to make change for an amount
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 on success and 1 on Error
 */

int main(int argc, char *argv[])
{
	int cents;
	int numCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		numCoins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", numCoins);
	return (0);
}
