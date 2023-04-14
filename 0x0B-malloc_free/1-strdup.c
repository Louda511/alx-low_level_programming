#include "main.h"

/**
 * *_strdup - creates a dulplicate string
 * @str: the string to be dulpicated
 *
 * Return: Null or pointer to string
 */

char *_strdup(char *str)
{
	char *c;
	int size = 0;
	char *s;

	for (c = str; *c; c++)
	{
		size++;
	}

	s = malloc(size + 1);

	if (s == NULL || str == NULL)
		return (NULL);

	while (size--)
	{
		s[size] = str[size];
	}

	return (s);
}
