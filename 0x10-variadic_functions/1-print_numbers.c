#include "variadic_functions.h"

/**
 * print_numbers - print numbers seprated by seorator
 * @separator: the character that seprates integers
 * @n: number of integers
 *
 * Return: nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list args;
		unsigned int i = n;
		int num;

		if (!separator)
			separator = "";

		va_start(args, n);
		while (--i)
		{
			num = va_arg(args, int);
			printf("%d%s", num, separator);
		}
		num = va_arg(args, int);
		va_end(args);
		printf("%d\n", num);
	}
	else
		printf("\n");
}
