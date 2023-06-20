#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all possible different combinations of three digits
 * Numbers must be separated by commas and spaces
 * The three digits must be different
 * Print only the smallest combination of the three digits
 * Use only 'putchar' function and only six times
 * Not allowed to use the variable type of 'char'
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				if (a != b && b != c && a != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a + b + c < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
