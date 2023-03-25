#include "main.h"

/**
 * _isalpha - determine whether a character is alphabetic
 *
 * @c: the character to be compared
 *
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
