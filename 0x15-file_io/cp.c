#include main.h

/**
 * main - where all the fun happens
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	size_t read, write;
	FILE *fto, *ffrom;
	char c;

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to");
		exit(97);
	}

	ffrom = fopen(av[1], "r");
	fto = fopen(av[2], "w");

	if (ffrom == NULL)
	{
		printf("Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	if (fto == NULL)
	{
		printf("Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (!feof(ffrom))
	{
		c = fgetc(ffrom);
		write = fputc
	


}
