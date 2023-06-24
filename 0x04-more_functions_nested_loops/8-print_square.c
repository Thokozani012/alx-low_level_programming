#include "main.h"

/**
 * print_square - The function prints a square
 * @size: Is the size of the square
 *
 * Return: A square on the terminal when called.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
