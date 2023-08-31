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
	int index, bit;

	for (index = 31; index >= 0; index++)
	{
		bit = n & ((1 << index) >> 1);

		if (bit)
			_put_char(1);
		else
			_put_char(0);
	}
}
