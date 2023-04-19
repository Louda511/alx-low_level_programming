#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates over an array of integers
 * @array: the array
 * @size: size of array
 * @action: function that preforms an action
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0 ; i < size; i++)
		{
			action(array[i]);
		}
	}
}

