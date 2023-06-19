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
	int y;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = (n % 10);
	x = abs(n % 10);
	if (x > 5)
    {
        printf("Last digit of %d is %d %s\n", n, y, "and is greater than 5");
    }
    else if (x < 6 && x != 0)
    {
        printf("Last digit of %d is %d %s\n", n, y,"and is less than 6 and not 0");
    }
    else
    {
        printf("Last digit of %d is %d %s\n", n, y,"and is 0");
    }
	return (0);
}
