#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all possible combinations of single digit numbers
 * Numbers must be seprated by commas and spaces
 * You can only use the 'putchar' function
 * 'putchar' can only be used four times
 * You cannot use the variable 'char'
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	if (n < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
}
