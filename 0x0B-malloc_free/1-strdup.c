#include "main.h"

/*
 * *_strdup - creates a dulplicate of its argument
 * @str: the string to be dulpicated
 *
 * Return: Null or pointer to string
 */

char *_strdup(char *str)
{
	char *c;
	int size = 0;

	for (c = str; *c; c++)
	{
		size++;
	}

	if (s == 0)
		return (NULL);

	while (size--)
	{
		s[size] = str[size];
	}

	return (s);
}
