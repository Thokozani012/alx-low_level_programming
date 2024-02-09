#include "main.h"

/**
  * print_binary - prints the binary representative number
  * @n: The number to be converted to binary
  *
  * Return: Nothing (void function)
  */
void print_binary(unsigned long int n)
{
	int binary;

	if (n >> 1)
		print_binary(n >> 1);
	binary = n & 1;
	_putchar(binary + '0');
}
