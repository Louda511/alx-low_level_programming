#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int change = 0;
	int num = 0;
	int cents[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	num = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (num >= cents[i])
		{
			change += num / cents[i];
			num = num % cents[i];
		}
	}

	printf("%d\n", change);
	return (0);
}
