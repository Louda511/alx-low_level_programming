#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	int result;

	if (index > 31)
		return (-1);

	*n |= (1 << index);

	return (1);
}
