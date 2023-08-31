#include "main.h"

/**
 * set_bit - set the bit at the index to one
 * @n: number
 * @index: index
 *
 * Return: one if success or negative one if fail
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n |= (1 << index);

	return (1);
}
