#include "main.h"

/*
 * *_strdup - creates a dulplicate of its argument
 * @str: the string to be dulpicated
 *
 * Return: Null or pointer to string
 */

char *_strdup(char *str)
{
	int size = sizeof(str);
	char *s = malloc(size);

	if (sizeof(s) == 0 || sizeof(s) != sizeof(str))
		return (NULL);
	size--;

	while (size--)
	{
		s[size] = str[size];
	}

	return (s);
}
