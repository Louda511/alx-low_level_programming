#include "main.h"

/**
 * jack_bauer - main function
 *
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
	int i = 0, j = 0, x, y;

	while (i < 24)
	{
		x = i / 10;
		_putchar('0' + (x % 100));
		_putchar('0' + (i % 10));
		_putchar(':');
		y = j / 10;
		_putchar('0' + (y % 100));
		_putchar('0' + (j % 10));
		_putchar('\n');
		j++;
		if (j == 60)
		{
			i++;
			j = 0;
		}
	}
}
