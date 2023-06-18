#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - The code checks the last digit of a random number n and determines whether number is 0, less than 6 and not , and if it is greater than 5
 *
 * Retunr: 0 (Success)
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = abs(n % 10);
	if (x > 5)
    {
        printf("Last digit of %d is %s\n", n, "greater than 5");
    }
    else if (x < 6 && x != 0)
    {
        printf("Last digit of %d is %s\n", n, "less than 6 and not 0");
    }
    else
    {
        printf("Last digit of %d is %s\n", n, "zero");
    }
	return (0);
}
