#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * The combination of numbers must be separated by comma, followed by a space.
 * The combinations of numbers should be printed in ascending order.
 * You can only use the putchar function.
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 * Return: 0 (Success)
 */

int main(void)
{
    int a;
    int b;

    for (a = 0; a <= 98; a++)
    {
        for (b = a + 1; b <= 99; b++)
        {
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');

        }
    }
    putchar('\n');
    return (0);
}
