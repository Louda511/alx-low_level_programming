#include "main.h"

/**
 * flip_bits - returns the number of bits you flipped
 * @n: first number
 * @m: second number
 *
 * Return: returns the number of bits you flipped
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bit;
	unsigned int count = 0;
	unsigned long int xor;

	xor = m ^ n;

	for (i = 0; i < 31; i++)
	{
		bit = xor & (1 << i);
		if (bit)
			count++;

	}
	return (count);
}
