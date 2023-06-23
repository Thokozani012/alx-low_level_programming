#include "main.h"

/**
 * more_numbers - Prints x10 the numbers from 0 o 14
 *
 * Return: 0 to 14 numbers x10
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
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
