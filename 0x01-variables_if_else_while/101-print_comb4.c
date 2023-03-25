#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, n, m;

	for (x = 0; x <= 7; x++)
	{
		for (n = x + 1; n <= 8; n++)
		{
			for (m = n + 1; m <= 9; m++)
			{
				putchar('0' + x);
				putchar('0' + n);
				putchar('0' + m);
				if (!(x == 7 && n == 8 && m == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
