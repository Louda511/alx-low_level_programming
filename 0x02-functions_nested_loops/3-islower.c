#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: character to compare
 *
 * Return: 1 if c is lowercase and 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
