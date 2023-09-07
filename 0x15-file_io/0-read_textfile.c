#include"main.h"

/**
 * read_textfile - reads any number of letters in a text file
 * @filename: pointer to the file to be read
 * @letters: number of letters to be read
 *
 * Return: Number of letters in a file
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	size_t i = 0;
	char c;
	int p = 0;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	while (i < letters)
	{
		c = fgetc(f);
		if (feof(f))
			return (i);
		p = _putchar(c);
		if (p < 0)
			return (0);
		i++;

	}

	fclose(f);
	return (i);


}
