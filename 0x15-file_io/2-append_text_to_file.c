#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  name of the file.
 * @text_content: added to be content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, letters, wr;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr = write(fp, text_content, letters);

		if (wr == -1)
			return (-1);
	}

	close(fp);

	return (1);
}
