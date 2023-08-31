#include "main.h"

/**
 * print_binary - prints the number in binary format
 * @n : Decimal number
 *
 * Return: a string representing binary formay
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int d, result;
	int flag;

	flag = 0;
	d = (1 << 30);
	d *= 2;

	while (d != 0)
	{
		result = (n & d);
		/* printf("%lu\n", result); */
		if (result == d)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
