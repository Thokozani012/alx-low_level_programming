#include <stdio.h>

/**
 * main - Entry point
 * Description: The program prints _putchar
 * 
 * Return: 0 (Success)
 */

int _putchar(chr name[])
{
	return (write(1, name, 8));
}

int main(void)
{
	_putchar("_putchar");
	putchar('\n');
	return (0);
}
