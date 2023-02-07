#include "main.h"

/**
 * create_file - creates a file
 * @filename:  name of the file to create
 * @text_content: content to be written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, letters, wr;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	wr = write(fp, text_content, letters);

	if (wr == -1)
		return (-1);

	close(fp);

	return (1);
}
