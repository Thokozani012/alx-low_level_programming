#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
{
	printf("%d %s\n", n, "is positive");
}
	else if (n == 0)
{
	printf("%d %s\n", n, "is zero");
}
	else
{
	printf("%d %s\n", n, "is negative");
}
	return (0);
}
