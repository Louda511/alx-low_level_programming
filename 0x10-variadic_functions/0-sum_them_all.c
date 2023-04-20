#include "variadic_functions.h"

/**
 * sum_them_all - adds all the arguments passed to it
 * @n: number of arguments
 * @...: arguments passed to the function
 *
 * Return: the sum of arguments
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i;
	
	if(!n)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
