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
	int i, bit, flag = 0;

	for (i = 31; i >= 0; i--)
	{
		bit = ((n & (1 << i)) >> i);
		
		if (bit == 1)
		{
			flag = 1;
		}
		if (flag)
			_putchar(bit+48);
	}
	if (!flag)
	{
		_putchar('0');
	}
}


			
