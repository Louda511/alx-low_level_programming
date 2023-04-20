#include "variadic_functions.h"

/**
 * print_strings - print strings seprated by seorator
 * @separator: the character that seprates integers
 * @n: number of strings
 *
 * Return: nothing
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list args;
		unsigned int i = n;
		char *st;

		if (!separator)
			separator = "";

		va_start(args, n);
		while (--i)
		{
			st = va_arg(args, char*);
			printf("%s%s", st, separator);
		}
		st = va_arg(args, char*);
		va_end(args);
		printf("%s\n", st);
	}
	else
		printf("\n");
}
