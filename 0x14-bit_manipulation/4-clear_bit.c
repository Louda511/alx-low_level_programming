#include "main.h"

/**
 * clear_bit - clears bit at a given index
 * @n: number
 * @index: index of the bit to be cleared
 *
 * Return: one if success or negative one if fail
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
