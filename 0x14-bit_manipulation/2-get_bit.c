#include "main.h"

/*
 * get_bit - returns the value of a bit at a give index
 * @n: number
 * @index: index
 *
 * Return: bit at the index or -1 if there is an error
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = (n & (1 << index)) >> index;

	return result;
}

