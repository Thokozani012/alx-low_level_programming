#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to ne printed
 *
 * Return: On success 1, -1 on errno.
 * And errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
