#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - iterates over an array of integers
 * @array: the array
 * @size: size of array
 * @cmp: function that preforms a comparison
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		int i;

		for (i = 0 ; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
