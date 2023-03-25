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
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
	}
	printf("%d%c", sum, '\n');
	return (0);
}
