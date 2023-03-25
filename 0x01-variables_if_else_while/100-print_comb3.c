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
	int n, m, b = 1;

	for (n = 0; n <= 8; n++)
	{
		for (m = b; m <= 9; m++)
		{
			putchar('0' + n);
			putchar('0' + m);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
	}
	putchar('\n');
	return (0);
}
