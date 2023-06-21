#include "main.h"

/**
 * main - print all alphabets in lowercase
 *
 * Return: Always 0.
 */

void  print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
