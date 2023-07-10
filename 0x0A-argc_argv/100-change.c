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
	int i = 0;
	int amount = atoi(argv[i]);
	int coinDenominations[] = {25, 10, 5, 2, 1};
	int numCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if(amount < 0)
	{
		printf("0\n");
		return (0);
	}
	

	for (size_t i = 0; i < sizeof(coinDenominations) / sizeof(coinDenominations[0]); i++)
	{
		int currentCoins = amount / coinDenominations[i];
		numCoins += currentCoins;
		amount -= currentCoins * coinDenominations[i];
	}

	printf("%d\n", numCoins);
	return (0);
}
