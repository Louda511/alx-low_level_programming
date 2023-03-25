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
	long int x = 1, y = 2, z = x + y, sum = 2;

	while (z <= 4e6)
	{
		z = x + y;
		if (z % 2 == 0)
			sum += z;
		x = y;
		y = z;
	}
	printf("%lu%c", sum, '\n');
	return (0);
}
