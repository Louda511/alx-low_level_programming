#include "main.h"

/**
 * _abs - compute the absolute value of an integer.
 *
 * @n: the integer parameter.
 *
 * Return: the absolute value of the integer parameter.
 */
int _abs(int n)
{
	if (n <= 0)
		n = -n;
	return (n);
}
