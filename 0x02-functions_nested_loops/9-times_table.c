#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 time tables.
 *
 */
void times_table(void)
{
	int i, j, x, y;

	for (i = 0; i < 10; i++)
	{
		x = i;
		_putchar('0');
		_putchar(',');
		for (j = 0; j < 9; j++)
		{
			if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + x);
			}
			else
			{
				_putchar(' ');
				y = x / 10;
				_putchar('0' + (y % 10));
				_putchar('0' + (x % 10));
			}
			if (j < 8)
				_putchar(',');
			x += i;
		}
		_putchar('\n');
	}
}
