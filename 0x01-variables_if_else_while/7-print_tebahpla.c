#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'z';

	/* your code goes there */
	for (n = 'z'; n > 'a'; n--)
	putchar(n);
	putchar('\n');
	return (0);
}
