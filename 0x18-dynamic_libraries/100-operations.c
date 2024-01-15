#include <stdio.h>

/**
  * add - sums two integers
  * @a: first integer
  * @b: Second integer
  *
  * Return: the sum of a and b
  */
int add(int a, int b)
{
	return (a + b);
}

/**
  * sub - Subtracts two integers
  * @a: the integer to be subtracted from
  * @b: the integer to subtrack from 'a'
  *
  * Return: The difference between a and b
  */
int sub(int a, int b)
{
	return (a - b);
}

/**
  * mul - multiplies two integers
  * @a: first integer
  * @b: secod integer
  *
  * Return: The product of a and b '(axb)'
  */
int mul(int a, int b)
{
	return (a * b);
}

/**
  * div - divides two numbers
  * @a: the integer to be divided
  * @b: the devider
  *
  * Return: On successs Quotient, or EXIT_FAILURE on failure
  */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
}

/**
  * mod - finds the modulo of an integer
  * @a: integer to be modulated
  * @b: integer used to find the modulo of 'a'
  *
  * Return: On successs the modulus of a, or EXIT_FAILURE on failure
  */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
}
