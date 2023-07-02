#include <stdio.h>

/**
 * main - Prints the largest prime number
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	long int number = 612852475143;
	int devisor = 2;

	while (number > 1)
	{
		if (number % devisor == 0)
		{
			number = number / devisor;
		}
		else
			devisor++;
	}
	printf("%d\n", devisor);
	return (0);
}
