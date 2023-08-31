#include "main.h"

/**
 * get_bit - get the required bit at index
 * @n: number
 * @index: index
 *
 * Return: bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = (n & (1 << index)) >> index;

	return (result);
}

