#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - printing all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	char lett = 'a';

	/* your code goes there */
	for (num = 0; num < 10; num++)
	putchar(48 + num);

	for (lett = 'a'; lett <= 'f'; lett++)
	putchar(lett);

	putchar('\n');
	return (0);
}
