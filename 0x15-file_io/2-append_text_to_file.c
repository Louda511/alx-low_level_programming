#include "main.h"
#include <string>

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

	fp = fopen(filename, "r+");

	if (fp == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fclose(fp);
		return (1);
	}

	res = fwrite(filename, 1, strlen(text_count), fp);

	fclose(fp);

	if (res)
		return (1);
	else
		return (-1);



}
