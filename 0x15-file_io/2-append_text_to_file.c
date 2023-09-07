#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to and existing file
 * @filename: name of file to be appended
 * @text_content: text to be added
 *
 * Return: one on success and negative one on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t res;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "a");

	if (fp == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fclose(fp);
		return (1);
	}

	res = fprintf(fp, "%s", text_content);

	fclose(fp);

	if (res)
		return (1);
	else
		return (-1);



}
