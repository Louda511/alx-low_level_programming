#include "main.h"

/**
 * *_str_concat - concatenates two strings
 * @str1: the first string to be concatinated
 * @str2: the second string to be concatinated
 *
 * Return: Null or pointer to string
 */

int _strlen(char *str)
{	
	if(str == NULL)
		return (0);

	int size = 0;
	char *c;

	for (c = str; *c; c++)
        {
                size++;
        }
	
	return (size);
}

char *_str_concat(char *str1, char *str2)
{
	int size1 = _strlen(str1);
	int size2 = _strlen(str2);
	char *s;
	int i;
	
	if (size1 == 0)
		str1 = "";
	if (size2 == 0)
		str2 = "";
	
	s = malloc(size1 + size2 + 1);

	for (i=0; i < size1; i++)
	{
		s[i] = str1[i];
	}
	for (i=0; i < size2 + 1;i++)
	{
		s[i + size1] = str2[i];
	}

	return (s);
}
