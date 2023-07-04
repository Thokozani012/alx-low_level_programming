#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j / 10 != 0)
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(i * j % 10 + '0');
			}
			
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
