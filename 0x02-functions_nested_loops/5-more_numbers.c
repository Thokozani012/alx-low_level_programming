#include "main.h"

/**
 * more_numbers - Prints 10x the numbers from 0 to 14
 *
 * Return: The numbers 0 to 14 x10 and a new line
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + n % 10);
		}
		i++;
		_putchar('\n');
	}
}
