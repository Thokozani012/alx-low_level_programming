#include <stdio.h>

/**
 * main - Entry point
 * Print all possible different combinations of two digits.
 * The two digits must be different
 * Print only the smallest combinations of two digits.
 * Must be printed in ascending order, with two digits.
 * You can only use the putchar function.
 * The putchar must only be used five times.
 * you cannot use the variable type of 'char'.
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10, b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
