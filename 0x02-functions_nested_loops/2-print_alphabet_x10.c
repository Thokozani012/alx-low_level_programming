#include "main.h"

/**
 * print_alphabet_x10 -  prints all alphabets in lowrcase x10
 *
 * Return: Always 0 (Succeess)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		i++;
		_putchar('\n');
	}
}
