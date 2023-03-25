#include "main.h"
#include <stdio.h>

/**
 * rep - prints repetitive space characters.
 *
 * @r: number of reps
 *
 * Return: void
 */
void rep(int r)
{
	int a;

	for (a = 0; a < r; a++)
		_putchar(' ');
}

/**
 * print_times_table - prints the 9 time tables.
 *
 * @n: number of multiples
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, x, y, z;

	if (n >= 0 && n < 16)
	{
		for (i = 0; i < n + 1; i++)
		{
			x = i;
			_putchar('0');
			if (n != 0)
				_putchar(',');
			for (j = 0; j < n; j++, x += i)
			{
				if (x < 10)
				{
					rep(3);
					_putchar('0' + x);
				}
				else if (x < 100)
				{
					rep(2);
					y = x / 10;
					_putchar('0' + (y % 10));
					_putchar('0' + (x % 10));
				}
				else
				{
					_putchar(' ');
					y = x / 100;
					z = x / 10;
					_putchar('0' + (y % 10));
					_putchar('0' + (z % 10));
					_putchar('0' + (x % 10));
				}
				if (j < n - 1)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
