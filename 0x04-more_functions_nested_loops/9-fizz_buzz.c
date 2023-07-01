#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints a character to a stdout
 * @c: the character to be printed
 *
 * Return: a character to the stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putchar_number - Prints numbers from 0 to 100
 * @n: numbers to be printed
 *
 * Return: The function is void function
 */
void _putchar_number(int n)
{
	int reverse = 0;

	while (n > 0)
	{
		int digit = n % 10;

		reverse = reverse * 10 + digit;
		n /= 10;
	}

	while (reverse > 0)
	{
		int digit = reverse % 10;

		_putchar(digit + '0');
		reverse /= 10;
	}
}

/**
 * _putchar_word - Prints a string in a stdout
 * @str: the string to be printed
 *
 * Return: The function does not return a value.
 */
void _putchar_word(const char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * main - Print numbers from 1 to 100
 * Prints 'Fizz' insted of multiples of 3
 * Prints 'Buzz' instead of multiple of 5
 * Prints 'FizzBuzz' instead of multiple of 3 AND 5
 *
 * Return: Always 0 (Success)
 */
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
		{
			_putchar_number(n);
		}

		if (n < 100)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
	return (0);
}
