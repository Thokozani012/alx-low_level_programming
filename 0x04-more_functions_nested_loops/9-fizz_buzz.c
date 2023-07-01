#include "main.h"

/**
 * _putchar_word - Prints a string of characters
 * @str - is the string to be printed
 *
 * int main(void) - prints numbers from 1 to 100
 *
 * The programm prints numbers for m 1 to 100
 * It then prints Fizz in multiples of 3
 * Prints 'Buzz' in multiples of 5
 * and prints 'FizzBuzz' in multiple of 3 and 5
 *
 * Return: Always 0 (Success)
 */

void _putchar_word(const char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
}

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			const char *word = "FizzBuzz";

			_putchar_word(word);
		}
		else if (n % 3 == 0)
		{
			const char *word1 = "Fizz";

			_putchar_word(word1);
		}
		else if (n % 5 == 0)
		{
			const char *word2 = "Buzz";

			_putchar_word(word2);
		}
		else
			_putchar('0' + n);
	}
	_putchar('\n');
	return (0);
}
