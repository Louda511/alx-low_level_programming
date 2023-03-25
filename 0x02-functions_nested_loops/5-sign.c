#include "main.h"

/**
 * print_sign - checks the sign of a number.
 *
 * @n: the number to be compared.
 *
 * Return: 1 if n is greater than zero, 0 if n equals zero, -1 otherwise.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
