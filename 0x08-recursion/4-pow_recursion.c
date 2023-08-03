#include "main.h"

/**
 * _pow_recursion - returns x to the power y (x^y)
 * @x: Base
 * @y: Power
 *
 * Return: Value of x raised to the power of y,
 * returns -1 when y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
