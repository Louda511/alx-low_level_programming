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
	int i, j, x, y, z;

	for (i = 0; i <= 99; i++)
		for (j = i + 1; j <= 99; j++)
		{
			x = i % 10;
			z = i / 10;
			y = z % 10;
			putchar('0' + y);
			putchar('0' + x);
			putchar(' ');
			x = j % 10;
			z = j / 10;
			y = z % 10;
			putchar('0' + y);
			putchar('0' + x);
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
