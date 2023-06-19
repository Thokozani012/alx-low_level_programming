#include <stdlib.h>
#include <time.h>
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
	char n = 'a';

	/* your code goes there */
	for (n = 's'; n <= 'z'; n++)
	if (n != 'q' && n != 'e')
	putchar(n);
	putchar('\n');
	return (0);
}
