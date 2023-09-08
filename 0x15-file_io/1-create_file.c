#include "main.h"
#include <string.h>

/**
 * create_file - creates a new file and write text to it
 * @filename: name of the file to write to
 * @text_content: text to be written to file
 *
 * Return: one on success negative one on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t r;
	int cl;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w+");

	if (fp == NULL)
		return (-1);

	if (text_content == NULL)
	{
		cl = fclose(fp);
		if (cl != EOF)
			return (1);
		else
			return (-1);
	}
	r = fprintf(fp, "%s", text_content);

	cl = fclose(fp);

	if (r > 0 && cl != EOF)

		return (1);
	else
		return (-1);
}



