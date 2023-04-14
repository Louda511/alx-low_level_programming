#include "main.h"

/**
 * *create_array - allocates memory for an array of chars
 * @size: size of the array
 * @c: initial value of all array
 *
 * Return: pointer to the start of the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == 0)
		return (NULL);

	while (size--)
	{
		array[size] = c;
	}

	return (array);
}
