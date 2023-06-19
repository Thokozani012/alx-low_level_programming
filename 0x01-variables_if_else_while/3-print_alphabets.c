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
	char x = 'a';
	char y = 'A';

	/* your code goes there */
	for (x = 'a'; x <= 'z'; x++)
{
	putchar(x);
}
	for (y = 'A'; y <= 'Z'; y++)
{
	putchar(y);
}
	putchar('\n');
	return (0);
}
